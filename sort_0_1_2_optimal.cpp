 #Sort An Array of 0s, 1s and 2s

Input: 'arr' = [2, 2, 2, 2, 0, 0, 1, 0]

Output: Final 'arr' = [0, 0, 0, 1, 2, 2, 2, 2]

Explanation: The array is sorted in increasing order.


optimal solution 
# Dutch National Flag Algorithm 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int low =0,mid =0,high=n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            
            high--;
        }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }

    return 0;
}
