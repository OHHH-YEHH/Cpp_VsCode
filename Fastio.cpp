// A fast IO program 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int totalnum, isdivisibleby, inputnum; 
    int cnt = 0; 
    cin >> totalnum >> isdivisibleby; 
    for (int i=0; i<totalnum; i++) 
    { 
        cin >> inputnum; 
        if (inputnum % isdivisibleby == 0) 
            cnt++; 
    } 
    cout << cnt << "\n"; 
    return 0; 
}