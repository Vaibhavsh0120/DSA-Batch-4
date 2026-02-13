#include <iostream>
using namespace std;

// Day_04_01
// 11. Container With Most Water 
int maxArea(int height[] , int n) {
    int low = 0;
    int high = n - 1;

    int length = 0;
    int curArea = 0;
    int maxArea = 0;

    while (low < high) {

        length = high - low;

        curArea = min(height[low], height[high]) * length;

        maxArea = max(curArea, maxArea);

        if(height[low] < height[high]) {
            low++;
            continue;
        }
        else if (height[low] > height[high]) {
            high--;
            continue;
        }
        else {
            low++;
            high--;
        }
    }

    return maxArea;
}

int main() {
    
    return 0;
}