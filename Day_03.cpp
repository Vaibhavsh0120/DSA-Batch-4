#include <iostream>
#include <vector>

using namespace std;

// Kadane Algo

// Leetcode 283 - Brute Force
void moveZeroes_Brute(vector<int>& nums) {      

    int zeros = 0;

    for (int i = 0 ; i < nums.size() ; i++) {
        if(nums[i] == 0) {
            nums.erase(nums.begin() + i);
            i--;              // Important: re-check shifted element
            zeros++;
        }
    }

    while (zeros > 0) {
        nums.push_back(0);
        zeros--;
    }
}

// Leetcode 283 - Optimized - Two Pointer Approach
void moveZeroes_Optimized(vector<int>& nums) {
    
    int insertPos = 0;

    // Step 1: Move non-zero elements forward
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Step 2: Fill remaining positions with zero
    while (insertPos < nums.size()) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes_Brute(nums);

    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}
