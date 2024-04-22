//A subarray is a contiguous segment of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning and 0 or more integers from the end of an array.
//Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
//The sum of an empty subarray is 0.
//Example :
//Input: 'arr' = [1, 2, 7, -4, 3, 2, -10, 9, 1]
//Output: 11

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
//  [1, 2, 7, -4, 3, 2, -10, 9, 1 ]
// output 11
int fun(vector<int> &arr){
   int sum = 0;
   int n = arr.size();
   int max_sum = INT_MIN;
   for(auto it : arr){
       sum += it;
       max_sum = max(max_sum, sum);
       if(sum < 0) sum = 0;
   }
   return max_sum;
   
   
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
 
   int ans = fun(arr);
    cout<<ans;

    return 0;
}
