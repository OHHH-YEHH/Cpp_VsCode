#include <iostream>
#include <algorithm>
#include <iterator>

// Ref. https://www.techiedelight.com/print-contents-array-reverse-order-cpp/

void print(const int &i) {
	std::cout << i << ' ';
}

using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    // 1. Using array indices
    {
        // iterate backwards over the elements of an array
        for (int i = n - 1; i >= 0; i--)
        {
            std::cout << arr[i] << ' '; // 40 30 20 10
        }
    }

    // 2. std::copy
    {

        // Print contents of an array in reverse order in C++
        // using std::ostream_iterator

        std::reverse_iterator<int *> begin(arr + n);
        std::reverse_iterator<int *> end(arr);

        std::copy(begin, end,
                  std::ostream_iterator<int>(std::cout, " "));
    }

    // 3. Print contents of an array in reverse order in C++
    // using iterators
    {
        auto it = std::cend(arr);
        while (it != std::cbegin(arr))
        {
            std::cout << *(--it) << ' ';
        }
    }

    // 4. std::for_each
    {
        std::reverse_iterator<int *> begin(arr + n);
        std::reverse_iterator<int *> end(arr);

        std::for_each(begin, end, print);

        // using lamda rather than function call to print()
        std::for_each(begin, end,
				[](const int &e) {
					std::cout << e << " ";
				});
    }

    

    return 0;
}