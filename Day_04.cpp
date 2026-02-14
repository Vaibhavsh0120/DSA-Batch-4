#include <iostream>
#include <unordered_map>
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

// Day_04_02
// HashMap Working
void HasMap() {
    unordered_map<int, int> mp;
    /*
        Insert → O(1)
        Search → O(1)
        Delete → O(1)
    */

    // mp[key] = value;        // insert or update
    mp[1] = 10;
    mp[2] = 20;

    mp.insert({3, 30}); // IGNORED BY COMPILER OF ALREADY EXIST

    // Check if Key Exists
    if(mp.find(2) != mp.end())
        cout << "Found";

    // Count (Very Important)
    // mp.count(key); 
    // Returns:
    // 1 → key exists
    // 0 → not exists
        
    if(mp.count(5)) {
        cout << "5 Exists\n";
    } else {
        cout << "5 DO NOT Exists\n";
    }

    // Erase
    // mp.erase(key);

    mp.erase(2);

    mp.size();

    mp.empty();

    mp.clear();

    for(auto &it : mp) { // Key Value Pair goes to IT
        cout << it.first << " " << it.second << endl;
    }

    return;
}

int main() {
    
    return 0;
}