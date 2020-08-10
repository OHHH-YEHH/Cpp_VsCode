// https://www.geeksforgeeks.org/heap-using-stl-c/

// make_heap(), push_heap(), pop_heap(), sort_heap(), is_heap()
//, is_heap_until()

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Initializing a vector
    vector<int> v1 = {20, 30, 40, 25, 15};

    // Converting vector into a heap
    // using make_heap()
    make_heap(v1.begin(), v1.end()); // creates maxHeap-> v1 = {40 30 20 25 15}

    // make_heap(v1.begin(), v1.end(),greater<int>()); // creates minHeap -> v1 = {15 20 40 25 30}

    cout << "The maximum element of heap is : ";
    cout << v1.front() << endl;

    // using push_back() to enter element
    // in vector
    v1.push_back(50); // adds elements at next leaf node v1 = {40 30 20 25 15 50}

    // using push_heap() to reorder elements
    push_heap(v1.begin(), v1.end()); //-> makes proper position of newly inserted value v1 = {50 30 40 25 15 20}

    cout << "The maximum element of heap after push is : ";
    cout << v1.front() << endl;


    // just removes first element and puts at the last 
    //pop_heap(v1.begin(), v1.end()); // v1={40 30 20 25 15 50}


    // using pop_heap() to delete maximum element 
    pop_heap(v1.begin(), v1.end()); // First do this and then below step
    v1.pop_back(); // v1={40 30 20 25 15 }
    
    cout << "The maximum element of heap after pop is : "; 
    cout << v1.front() << endl; 
    
    
    
    // Displaying heap elements  
    cout << "The heap elements are : "; // 40 30 20 25 15
    
    // 1) normal way to iterate through containers
    // for(auto x:v1)
    //     cout << x << " ";

    // 2) way to iterate through containers
    std::copy(v1.begin(),v1.end(),
			std::ostream_iterator<int>(std::cout, " "));

    
    // sorting heap using sort_heap() 
    // After this operation, the container is no longer a heap.
    sort_heap(v1.begin(), v1.end()); // 15 20 25 30 40
      
     // Displaying heap elements  
    cout << "\nThe heap elements after sorting are : "; 
    // 3) way to use reference so that we can modify container element along the path(if we need to )
    for (int &x : v1)  
       cout << x << " "; 



    v1 = {40, 30, 25, 35, 15}; 


    // Checking if container is heap 
    // using is_heap() 
    // in most implementations, the reverse sorted container is considered as heap.
    is_heap(v1.begin(), v1.end()) ? 
                                    cout << "\nThe container is heap " : 
                                                                            cout << "\nThe container is not heap"<<endl;  
  

    
    // using is_heap_until() to check position  
    // till which container is heap 
    auto it = is_heap_until(v1.begin(), v1.end()); 
    
    // Displaying heap range elements 
    cout << "The heap elements in container are : "; //  40 30 25
    for (vector<int>::iterator it1 =v1.begin(); it1!=it; it1++) 
       cout << *it1 << " "; 
    return 0;
}