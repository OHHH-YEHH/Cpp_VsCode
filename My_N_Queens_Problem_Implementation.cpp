#include <iostream>
#include <stdio.h>
#include <String>
using namespace std;

void calculateAttackPosition(int **pointer, int i, int j, int numOfQ)
{
    int temprow = i + 1, tempcolumn = j + 1;

    // making all row Attacked
    do
    {
        pointer[i][tempcolumn % numOfQ] == 'O' ?: pointer[i][tempcolumn % numOfQ]++;
        tempcolumn++;
    } while (tempcolumn % numOfQ != j);

    // making all column attacked
    do
    {
        pointer[temprow % numOfQ][j] == 'O' ?: pointer[temprow % numOfQ][j]++;
        temprow++;
    } while (temprow % numOfQ != i);

    // making all Major-diagonal attacked
    for (int p = 0; p < numOfQ; p++)
    {
        for (int q = 0; q < numOfQ; q++)
        {
            if (p - q == i - j)
                pointer[p][q]++;
        }
    }

    // making all off-diagonal attacked
    for (int p = 0; p < numOfQ; p++)
    {
        for (int q = 0; q < numOfQ; q++)
        {
            if (p + q == i + j)
                pointer[p][q]++;
        }
    }
}

void releasePreviousAttack(int **pointer, int i, int j, int numOfQ)
{
    int temprow = i + 1, tempcolumn = j + 1;

    // releasing all row Attacked
    do
    {
        pointer[i][tempcolumn % numOfQ] == 'O' ?: pointer[i][tempcolumn % numOfQ]--;
        tempcolumn++;
    } while (tempcolumn % numOfQ != j);

    // releasing all column attacked
    do
    {
        pointer[temprow % numOfQ][j] == 'O' ?: pointer[temprow % numOfQ][j]--;
        temprow++;
    } while (temprow % numOfQ != i);

    // releasing all Major-diagonal attacked
    for (int p = 0; p < numOfQ; p++)
    {
        for (int q = 0; q < numOfQ; q++)
        {
            if (p - q == i - j)
                pointer[p][q]--;
        }
    }

    // releasing all off-diagonal attacked
    for (int p = 0; p < numOfQ; p++)
    {
        for (int q = 0; q < numOfQ; q++)
        {
            if (p + q == i + j)
                pointer[p][q]--;
        }
    }
}
int nQProblem(int **pointer, int numOfQ, int row)
{
    if (row == numOfQ)
        return 1;
    int returnvalue = -1;
    int j = 0;
    static int count = 0;
    for (; j < numOfQ; j++)
    {
        if (pointer[row][j] == 0)
        {
            pointer[row][j] = 'O';
            calculateAttackPosition(pointer, row, j, numOfQ);
            returnvalue = nQProblem(pointer, numOfQ, row + 1);
            if (returnvalue == 1)
            {
                count % numOfQ == 0 ? printf("\nqueen on %d %d \n", row, j) : printf("queen on %d %d \n", row, j);
                returnvalue = row;
                count++;
                releasePreviousAttack(pointer, row, j, numOfQ);
                pointer[row][j] = 0;
                continue;
            }
            else if (returnvalue > 1)
            {
                count % numOfQ == 0 ? printf("\nqueen on %d %d \n", row, j) : printf("queen on %d %d \n", row, j);
                returnvalue = row;
                count++;
                releasePreviousAttack(pointer, row, j, numOfQ);
                pointer[row][j] = 0;
                break;
            }
            else
            {
                releasePreviousAttack(pointer, row, j, numOfQ);
                pointer[row][j] = 0;
            }
        }
    }
    return returnvalue;
}

int main()
{
    int numOfQ = 4;

    cin >> numOfQ;
    int **grid = new int *[numOfQ];
    for (int i = 0; i < numOfQ; i++)
    {
        grid[i] = new int[numOfQ];
        for (int j = 0; j < numOfQ; j++)
        {
            grid[i][j] = 0;
        }
    }

    nQProblem(grid, numOfQ, 0);

    return 0;
}