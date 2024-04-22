
 #Sort An Array of 0s, 1s and 2s

Input: 'arr' = [2, 2, 2, 2, 0, 0, 1, 0]

Output: Final 'arr' = [0, 0, 0, 1, 2, 2, 2, 2]

Explanation: The array is sorted in increasing order.


#Better solution
T.C = O(N) S.C (1)

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int countzero = 0;
    int countone = 0;
    int counttwo = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
     for(int i = 0; i<n; i++){
        if(arr[i] == 0) countzero++;
        else if(arr[i] == 1) countone++;
        else if(arr[i] == 2 ) counttwo++;
    }
     for(int i = 0; i<countzero; i++){
        cout<<0;
    }
    for(int i = 0; i<countone;i++){
        cout<<1;
    }
    for(int i = 0; i<counttwo;i++){
        cout<<2;
    }
    
    return 0;
}
