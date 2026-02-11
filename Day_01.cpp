#include <iostream>
using namespace std;

/* LEETCODE FOR THE DAY
    1. Sum of all elements
    - LeetCode 1480
    - LeetCode 1672

    2. Second highest number in an array
    - LeetCode 1796
    - LeetCode 414

    3. Reverse of array
    - LeetCode 344
    - LeetCode 151
*/

// #01_3 -
// Reverse a array
void Reverse(int n, int arr[]){
    int first = 0;
    int last = n-1;
    int temp;

    while(first < last) {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        
        first++;
        last--;
    }

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
}

/*
    INTERVIEW QUESTION
    Find 2nd Highest Element
     - Sort to increasing and find 2nd last of array    - O(nLogn)
     - store 2nd highest while moving through the array - O(n)

    #01_2
    Find 2nd Maximum Elt in the array
*/
int SecMax(int n, int arr[]){
    int Max = -99999;
    int Sec_Max = -99999;

    for (int i = 0 ; i < n ; i++) {
        if (arr[i] > Max) {
            Sec_Max = Max;
            Max = arr[i];
        }
        else if (arr[i]  > Sec_Max && arr[i] < Max) {
            Sec_Max = arr[i];
        }
    }

    return Sec_Max;
}

// #01_1 - Day 01 Code 1
// Find the sum of all element in array
int FindSum(int n, int arr[]){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}

// MAIN FUNCTION
int main(){
    int arr[5] = {2, 3, 7, 9, 8};

    // int Sum = FindSum(5, arr);
    // int Sec_Max = SecMax(5, arr);
    Reverse(5, arr);


    // cout << endl << "Answer: "<< Sec_Max << endl;
    return 0;
}
