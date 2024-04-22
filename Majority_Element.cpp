

//You are given an array 'a' of 'n' integers.
//A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.
//Find the majority element of the array.
//It is guaranteed that the array 'a' always has a majority element.
//Example:
//Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]

//Output: 1

#Better Solution 

// T.C O(NlogN) + O(N)
// S.C O(N) 

#include <bits/stdc++.h>
using namespace std;
int fun(int arr[], int n){
    map<int,int> mpp;
   int ans = 0;
   for(int i = 0; i<n; i++){
       mpp[arr[i]]++;
   }
   for(auto it : mpp){
       if(it.second > n/2){
           return it.first;
        
       }
      
   }
   return -1;
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   int size = sizeof(arr[n])/sizeof(arr[0]);
   int ans = fun(arr,size);
    cout<<ans;

    return 0;
}


****************************************************************************************************************************************************************************


#Optimal solution 
// Moore voting algorithm 
// T.C O(N)
// S.C O(1) 

#include <bits/stdc++.h>
using namespace std;
int fun(int arr[], int n){
   int co = 0;
   int element ;
   for(int i = 0; i<n; i++){
       if(co == 0){
           co=1;
           element = arr[i];
       }
       else if(arr[i] == element){
           co++;
       }
       else{
           co--;
       }
   }
   
   int count = 0;
   for(int i = 0; i<n; i++){
       if(arr[i] == element) count++;
   }
   if(count > n/2) return element;
   
   return -1;
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   int size = sizeof(arr[n])/sizeof(arr[0]);
   int ans = fun(arr,size);
    cout<<ans;

    return 0;
}
