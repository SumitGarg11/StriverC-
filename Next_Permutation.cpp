# Print Next_Permutation
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3}; // Sorted sequence

    do {
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}
