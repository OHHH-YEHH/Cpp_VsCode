#include <iostream>
#include <stdio.h>
#include <String>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inputnumber, size_of_ar;
    std::cin >> size_of_ar;
    int *a = new int[size_of_ar];
    for (int i = 0; i < size_of_ar; i++)
    {
        std::cin >> a[i];
    }

    // how to write lamda expression
    // Reorders the elements in the range [first, last) in such a way
    // that all elements for which the predicate p returns true
    // precede the elements for which predicate p returns false.
    stable_partition(a, a + size_of_ar, [](int x) {
        return (x < 0);
    });

    // Single line to output for Collections / array
    copy(a, a + size_of_ar, ostream_iterator<int>(cout, " "));

    return 0;
}