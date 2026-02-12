#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/* Leetcode H.W
    Problem 283, 268, 26
*/

/*
    Difference between 
    =
    ==
    .equalto()
*/

// #02_1 -
// Two Sum
// - Brute Force - O(n^2)
// - Hashing - 
void TwoSum_Brute(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Answer: " << arr[i] << " + " << arr[j] << endl;
                return;
            }
        }
    }

    cout << "No pair found" << endl;
}

// #02_2 -
// Problem 121 Leetcode
/*
    Input: prices = [7,1,5,3,6,4]
    Output: 5
    Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
*/
int maxProfit_Brute(int prices[], int n){  // - O(N^2)
    int max = 0, profit = 0;
        for(int i = 0 ; i < n ; i++) {
            for (int j = i + 1 ; j < n ; j++) {
                profit = prices[j] - prices[i];
                if(profit > max){
                    max = profit;
                }
            }
        }
    return max;
}

int maxProfit_Optimized(int prices[], int n){
    int minPrice = prices[0];
    int profit = 0;

    for (int i = 1 ; i < n ; i++) {
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }
        profit = max(prices[i] - minPrice, profit);
    }

    return profit;
}

int main(){
    int arr[] = {2, 3, 7, 8, 2, 5, 1};

    int target = 4;
    cout << "Target: " << target << endl;

    TwoSum_Brute(arr, 7, target);
    return 0;
}