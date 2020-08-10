// https://www.youtube.com/watch?v=2olsGf6JIkU


// http://www.cplusplus.com/reference/algorithm/


// https://www.geeksforgeeks.org/algorithms-library-c-stl/

// https://www.geeksforgeeks.org/the-c-standard-template-library-stl/

// https://www.geeksforgeeks.org/c-magicians-stl-algorithms/

// https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/

// http://www.cplusplus.com/reference/functional/

// Imp headers
// #include<algorithm>
// #include<functional>
// #include<memory>
// #include<numeric>
// #include<String>
// #include<math.h>

// Heap:

    // std ::push_heap() : Push element into heap range (function template )
    // std ::pop_heap() : Pop element from heap range (function template )
    // std ::make_heap () :Make heap from range (function template )
    // std ::sort_heap() :Sort elements of heap (function template )
    // std ::is_heap() : Test if range is heap (function template )
    // std ::is_heap_until () :Find first element not in heap order (function template )


//     Sorting

    // std :: sort() : Sort elements in range
    // std :: stable_sort() : Sort elements preserving order of equivalents
    // std :: partial_sort() : Partially sort elements in range
    // std :: partial_sort_copy : Copy and partially sort range
    // std :: is_sorted : Check whether range is sorted
    // std :: is_sorted_until : Find first unsorted element in range
    // std :: nth_element : Sort element in range

//partitioning

    // is_partitioned()  :Test whether range is partitioned
    // partition() :Partition range in two 
    // stable_partition () :Partition range in two - stable ordering 
    // partition_copy() : Partition range into two 
    // partition_point() : Get partition point 


//permutations

    //rotate =  Rotate left the elements in range i.e last element of vector is put at index 0
    //shuffle = Randomly rearrange elements in range
    //next_permutation = Transform range to next permutation
    //prev_permutation = Transform range to previous permutation
    //reverse = that reverses the collection


//secretRunes

    //stable_* = stable_sort , stable_partition 
    //is_*     = is_sorted , is_partitioned ,is_heap
    //is_*_until = is_sorted_until , is_partitioned_until ,is_heap_until

//Numeric
    #include <numeric>  
    //count = Count appearances of value in range
    //accumulate / reduce = Accumulate values in range

    //quering on a range -> all results in form of boolean
        //all_of
        //any_of
        //none_of

    //quering on two ranges -> all results in form of boolean
        //equal 
        //is_permutation = Check if array B includes all elements of array A
        //lexicographic_compare = check which of the two comes before in dictionary
        //mismatch = traverses in both ranges and stop whenever they start to differ :  return pair<iterator 1 , iterator 2> pointing to respective postition where they start to differ
    
//searching
    //->for sorted
        //binary search
        //equal_range 
        //lower_bound
        //upper_bound
    //->not sorted
        //find
        //adjacent_find 

//searching for a sub-range in a range 
    //search = it searches from beginning to end of container :returns first index where it was found
    //find_end = it searches from end to beginning of container :returns first index where it was found
    
// getting a element from container    
    //max_element
    //min_element
    //minmax_element = returns a pair<iterator,iterator> pointing to smallest and largest value

//Algos_on_sets ( set is sorted collection without duplicate)
    //set_difference
    //set_intersection
    //set_union
    //set_symmetric_difference -> A set difference B = (A union B)-(A intersection B)
    //includes = check whether A is subset of B
    //merge = merges two sets into third set

//Movers
    //copy = input collection elements remains as it is + same elements are pasted into output collection
    //move = input collection elements are actually moved from input collection into output collection
    //swap_ranges = provided both ranges/container have same size
    //copy_backwards
    //move_backwards

//Value_modifiers == these four methods actually change the values inside the collections
    //fill
    //generate -> to apply specific function to each container elements like map() function in python
    //iota (increments)
    //replace(v.begin(), v.end() ,42, 43) = replace every 42 in collection with 43

//Structure_Changes -> after they have done their job , the collection doesn't look the same
    //remove + erase
    //unique (removes adjacent)


// remove,replace,unique just do inplace operation so original container is modified
//*_copy -> below *_copy leaves the original collection untouched     
    //remove_copy
    //unique_copy
    //reverse_copy
    //rotate_copy
    //rotate_copy
    //replace_copy
    //partition_copy
    //partial_sort_copy
    
//*_if -> acts as a predicate    
    //find_if
    //find_if_not
    //count_if
    //remove_if
    //remove_copy_if
    //replace_if
    //replace_copy_if
    //copy_if

//lonely_islands
    //transform ( can also take 2 parameters) = applies a function to the elements of a collection
    //for_each -> applies f(x) to each element BUT if f(x) doesn't return anything then we could have side effect


// *_n ->takes size (in terms of integer) instead of end
    // eg. fill(vect.begin() , vect.end() ,42)
    // eg. fill_n(vect.begin() , 5 ,42)
    //copy_n
    //fill_n
    //generate_n
    //search_n
    //for_each_n

//back_inserted -> //https://www.geeksforgeeks.org/stdback_inserter-in-cpp/

