#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int A[] = {1, 4, 5, 9, 9,9,15,37};

    vector<int> v4(A, A + sizeof(A) / sizeof(int));

    bool res = binary_search(v4.begin(), v4.end(), 4);

    // lower_bound function ->return iterator, so to get index  -v4.begin()

    int ind = lower_bound(v4.begin(), v4.end(), 3) - v4.begin();
    // in case element is not found , it returns proper position for insertion
    cout << ind << endl; // 1

    ind = lower_bound(v4.begin(), v4.end(), 9) - v4.begin();
    cout << ind << endl; // 3

    ind = lower_bound(v4.begin(), v4.end(), 73) - v4.begin();
    cout << ind << endl; // 8

    // upper_bound 
    ind = upper_bound(v4.begin(), v4.end(), 9) - v4.begin();
    cout << ind << endl; // 6

    // in case element is not found , it returns proper position for insertion
    ind = upper_bound(v4.begin(), v4.end(), 23) - v4.begin();
    cout << ind << endl; // 7
    return 0;
}