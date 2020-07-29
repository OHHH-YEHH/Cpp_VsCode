// Program for Sum of the digits of a given number
// Examples :

// Input : n = 687
// Output : 21

// Input : n = 12
// Output : 3
// #######################################################
// How to compute in single line?
// Below function has three lines instead of one line 
// but it calculates sum in line. 
// It can be made one line function if we pass pointer to sum.
//###########################################################
// C language
// # include<stdio.h> 
// int getSum(int n) 
// { 
//     int sum; 
  
//     /* Single line that calculates sum */
//     for (sum = 0; n > 0; sum += n % 10, n /= 10); 
  
//     return sum; 
// } 
  
// int main() 
// { 
//   int n = 687; 
//   printf(" %d ", getSum(n)); 
//   return 0; 
// }
// ####################################################

//C++ language
# include<iostream> 
using namespace std; 
/* Function to get sum of digits */
class gfg 
{ 
 public: 
 int getSum(int n) 
 { 
    int sum; 
  
    /* Single line that calculates sum */
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
  
    return sum; 
 } 
}; 
  
//driver code 
int main() 
{ 
 gfg g;    
 int n = 687; 
 cout<< g.getSum(n); 
 return 0; 
} 

// 