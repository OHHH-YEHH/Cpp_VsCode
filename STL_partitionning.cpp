// http://www.cplusplus.com/reference/algorithm/is_partitioned/

// https://tutorialspoint.dev/language/cpp/stdpartition-in-c-stl

// is_partitioned example
#include <iostream>  // std::cout
#include <algorithm> // std::is_partitioned
#include <array>     // std::array
#include <vector>

using namespace std;
bool IsOdd(int i) { return (i % 2) == 1; }

int main()
{
    std::array<int, 7> foo{2, 1, 5, 6, 8, 7};

    // print contents:
    std::cout << "foo:";
    for (int &x : foo)
        std::cout << ' ' << x;
    if (std::is_partitioned(foo.begin(), foo.end(), IsOdd))
        std::cout << " (partitioned)\n";
    else
        std::cout << " (not partitioned)\n";

    // partition array:
    std::partition(foo.begin(), foo.end(), IsOdd);

    // print contents again:
    std::cout << "foo:";
    for (int &x : foo)
        std::cout << ' ' << x;
    if (std::is_partitioned(foo.begin(), foo.end(), IsOdd))
        std::cout << " (partitioned according to odd)\n";
    else
        std::cout << " (not partitioned according to odd)\n";

    cout << endl;
    cout << endl;






    // Initializing vector 
    vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 

    cout << "New vector in consideration is :";

    for(auto & x:vect)
        cout << x << " ";
    cout << endl;
      
    // partitioning vector using stable_partition() 
    // in sorted order 
    stable_partition(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2 == 0; // to check it is even        
    }); 
      
    // Displaying partitioned Vector 
    cout << "The partitioned vector (even at front) is : "; 
    for (int &x : vect) cout << x << " "; 
    cout << endl; 
    
    // Declaring iterator 
    vector<int>::iterator it1; 
      
    // using partition_point() to get ending position of partition 
    auto it = partition_point(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
    }); 

    // Displaying partitioned Vector 
    cout << "The vector elements returning true for condition are : "; 
    for ( it1= vect.begin(); it1!=it; it1++) 
    cout << *it1 << " "; 
    cout << endl; 




   // 5. partition_copy(beg, end, beg1, beg2, condition) :- This function copies 
   // the partitioned elements in the differenet containers mentioned in its 
   // arguments. It takes 5 arguments. Beginning and ending position of container, 
   // beginning position of new container where elements have to be copied 
   // (elements returning true for condition), beginning position of new container 
   // where other elements have to be copied (elements returning false for condition) 
   // and the condition. Resizing new containers is necessary for this function.

    
    vect = { 2, 1, 5, 6, 8, 7 }; 

    // Declaring vector1 
    vector<int> vect1; 

    // Declaring vector2 
    vector<int> vect2; 

    // Resizing vectors to suitable size using count_if() and resize() 
    int n = count_if (vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    } ); 
    vect1.resize(n);  
    vect2.resize(vect.size()-n); 

    
    // Using partition_copy() to copy partitions 
    partition_copy(vect.begin(), vect.end(), vect1.begin(),  
                                     vect2.begin(), [](int x) 
    { 
        return x%2==0; 
    }); 
    
    // Displaying partitioned Vector 
    cout << "The elements that return true (even elements) for condition are : "; 
    for (int &x : vect1)  
            cout << x << " "; 
    cout << endl; 
      
    // Displaying partitioned Vector 
    cout << "The elements that return false (odd elements) for condition are : "; 
    for (int &x : vect2)  
            cout << x << " "; 
    cout << endl; 

    return 0;
}