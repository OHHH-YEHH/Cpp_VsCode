
// Comprehensive and Beautiful Guide

// DON'T EVER TRY TO MAKE 2-D JAGGED ARRAY USING NEW CALL
// USE VECTOR ONLY .
//https://www.learncpp.com/cpp-tutorial/6-14-pointers-to-pointers/

#include <iostream>
#include <bits/stdc++.h>

int main()
{
    {
        int *ptr; // pointer to an int, one asterisk

        int **ptrptr; // pointer to a pointer to an int, two asterisks
    }

    {
        int value = 5;

        int *ptr = &value;
        std::cout << *ptr; // dereference pointer to int to get int value

        int **ptrptr = &ptr;
        std::cout << **ptrptr; // first dereference to get pointer to int, second dereference to get int value
    }

    int *arr, row, column;
    std::cin >> row >> column;

    // int **array = new int[row][column]; // won’t work!

    // There are two possible solutions here.
    // A. If the rightmost array dimension is a compile-time constant
    // A.1
    {
        int(*array)[5] = new int[row][5]; //The parenthesis are required here to ensure proper precedence.
    }
    // A.2. In C++11 or newer, this is a good place to use automatic type deduction:
    {
        auto array = new int[row][5]; // so much simpler!
    }

    // B
    {

        int **array = new int *[row]; // allocate an array of user input int pointers — these are our rows
        for (int i = 0; i < row; ++i)
        {

            array[i] = new int[column]; // these are our columns
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                std::cin >> array[i][j];
            }
        }

        array[9][4] = 3; //We can then access our array like usual:

        // Deallocating a dynamically allocated two-dimensional array using this method requires a loop as well:
        for (int i = 0; i < row; ++i)
            delete[] array[i];
        delete[] array; // this needs to be done last
    }
}
