//There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
//Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.
//Note:
//Start the array with a positive number. 
//For example
//Input:
//A = [1, 2, -4, -5], N = 4
//Output:
//1 -4  2 -5



# // Brute Force 
// T.C O(N)+ O(N)
// S.C O(N)

#include <bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> &arr){
    vector<int> postive_el;
    vector<int> negative_el;
    for(auto it: arr){
        if(it > 0){
            postive_el.push_back(it);
        }
        else{
            negative_el.push_back(it);
        }
    }
    int size = arr.size();
    for(int i = 0; i<size/2; i++){
        arr[2*i] = postive_el[i];
        arr[2*i+1] = negative_el[i];
    }
    return arr;
}
   
   

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
 
   vector<int> ans = fun(arr);
    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}
****************************************************************************************************************************************************************************



# // Optimal solution 
//T.C O(N)
// S.C O(N)


#include <bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> &arr){
    int pos_index = 0;
    int neg_index = 1;
    int n = arr.size();
    vector<int> ans(n,0);
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            ans[neg_index] = arr[i];
            neg_index += 2;
        }
        else{
            ans[pos_index] = arr[i];
            pos_index +=2;
        }
    }
   
    return ans;
}
   
   

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
 
   vector<int> ans = fun(arr);
    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}

