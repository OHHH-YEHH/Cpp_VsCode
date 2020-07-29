#include <iostream>
# include <stdio.h>
#include<string>
#include <bits/stdc++.h> 
using namespace std ;

int main ()
{
    int num,flag = 0;
    cin >> num;
    int k = num;
    for (int i = 2; i < k; i++)
    {
        if(num%i==0)
        {
            flag=1;
            std::cout  << i << '\n';
        }

        while(num%i==0)
        {
            num = num / i;
        }

    }
    if(flag==0)
        std::cout  << num << '\n';

    
    
    return 0;
}
