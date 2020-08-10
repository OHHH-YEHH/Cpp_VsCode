// C++ program to demonstrate the use of std::generate  , std::transform

// I think generate() and transform() does pretty much the same thing
#include <iostream>
#include <vector>
#include <algorithm>

// Defining the generator function
int gen()
{
    static int i = 0;
    return ++i;
}

int increment(int x) { return (x + 1); }

using namespace std;
int main()
{
    int i;

    // Declaring a vector of size 10
    vector<int> v1(10);

    // using std::generate
    std::generate(v1.begin(), v1.end(), gen); // 1 2 3 4 5 6 7 8 9 10

    // basic different betn generate() and transform() is that the function
    //that we give as parameter in generate shouldn't take have any formal
    // argument
    // see gen() don't have any formal argument



    ////////////////////////////////////////////////////////

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    //1) transform as Unary Operation
    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr + n, arr, increment); //2 3 4 5 6 
    // basic different betn generate() and transform() is that the function
    //that we give as parameter in transform have formal argument
    // see increment() have formal arguments

    // 2)transform as Binary Operation : add 2 arrays
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    n = sizeof(arr1) / sizeof(arr1[0]);
    int res[n];

    // Single line code to add arr1[] and arr2[] and
    // store result in res[]
    transform(arr1, arr1 + n, arr2, res, plus<int>()); //5 7 9
    return 0;
}