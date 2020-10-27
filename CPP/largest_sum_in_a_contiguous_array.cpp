/* Finding largest sum in a contiguous array using Kadane's algorithm.
author: anshul3pathi
*/
# include <bits/stdc++.h>
using namespace std;

// Function takes an integer array and it's size as input
// and returns the maximum contiguous sum.
int maxSumInArray(int arr[], int size) {
    int maxSoFar = arr[0];
    int currMax = arr[0];

    for(int i = 1; i < size; i++) {
        currMax = max(arr[i], currMax + arr[i]);
        maxSoFar = max(maxSoFar, currMax);
    }
    return maxSoFar;
}
