#include <iostream>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numOfTestcase , size_of_arr;
    cin >> numOfTestcase ; 
    int *arr = NULL ;
    for (int i = 0; i < numOfTestcase ; i++)
    {
        cin >> size_of_arr;
        arr = new int[size_of_arr];
        for (int j = 0; j < size_of_arr; j++)
            std::cin >> arr[i];
        
        // do the operation

        delete [] arr;
        
    }

    
    return 0;
}