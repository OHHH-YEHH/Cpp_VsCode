// C++ program to demonstrate  various sort methods in STL.
#include <bits/stdc++.h>
using namespace std;

// An interval has a start time and end time
struct Interval
{
    int start, end;
};

// Compares two intervals according to staring times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // 0 1 2 3 4 5 6 7 8 9

    sort(arr, arr + n, greater<int>()); // 9 8 7 6 5 4 3 2 1 0

    vector<int> v1;

    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(1);
    /* now the vector v1 is 8,4,5,1 */

    sort(v1.begin(), v1.end()); /* now the vector v1 is 1,4,5,8 */

    Interval intv[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    n = sizeof(intv) / sizeof(intv[0]);

    // sort the intervals in increasing order of
    // start time
    sort(intv, intv + n, compareInterval);

    // cout << "Intervals sorted by start time : \n"; // [1,9] [2,4] [4,7] [6,8]
    // for (int i=0; i<n; i++)
    //    cout << "[" << intv[i].start << "," << intv[i].end
    //         << "] ";
    // cout << endl;

//////////////////////////////////////////////////////////

    vector<int> v = {40, 12, 53, 11, 9, 5, 21}, i;

    // Using std::partial_sort
    //It rearranges the elements in such a way that
    // the elements before the middle argument are sorted in
    //ascending order, whereas the elements after middle are left
    //without any specific order.
    std::partial_sort(v.begin(), v.begin() + 3, v.end()); //5 9 11 53 40 12 21

    cout << "vector after partial sorting in default order: \n"; //5 9 11 53 40 12 21
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    // std::partial_sort(v.begin(), v.begin() + 3, v.end(),greater<int>()); // 53 40 21 11 9 5 12

    // cout << "vector after partial sorting in reverse/descending order: \n";
    // for (int i = 0; i < v.size(); ++i)
    //     cout << v[i] << " ";

//////////////////////////////////////////////////////////////

    //nth_element -> https://www.geeksforgeeks.org/stdnth_element-in-cpp/
    //In this code, since the nth element as pointed by the second argument in std::nth_element is the sixth element of the array v, so this means that the sixth element in the array after application of std::nth_element should be the one that would have been there if the whole array was sorted, i.e., 45.
    // nth_element application
    //1) first n smallest numbers  -> std::nth_element(v.begin(), v.begin() + First_how_many_smallest_element_we_want -1  , v.end());
    //2)first n largest numbers -> std::nth_element(v.begin(), v.begin() + First_how_many_largest_element_we_want -1 , v.end());
    //3)median of the elements given -> std::nth_element(v.begin(), (v.begin() + v.end())/2 , v.end());
    //4)Time Complexity O(n)

//////////////////////////////////////////////////////////////

    // https://www.geeksforgeeks.org/stable_sort-c-stl/
   // std :: stable_sort() : Sort elements preserving order of equivalents
   
///////////////////////////////////////////////////////////////
    // std :: is_sorted : Check whether range is sorted
    // std :: is_sorted_until : Find first unsorted element in range
    
/////////////////////////////////////////////////////////////////////

// http://www.cplusplus.com/reference/algorithm/inplace_merge/
    

    
    
    
     return 0;
}