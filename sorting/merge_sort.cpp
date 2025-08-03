// -----------------------------------MERGE SORT------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays into a single sorted subarray
void mergearray(int arr[], int st, int mid, int end) {
    vector<int> temp; // Temporary vector to store merged elements

    int left = st;        // Start index of the left half
    int right = mid + 1;  // Start index of the right half

    // Merge both halves while comparing their elements
    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);  // Add smaller element from left
            left++;
        } else {
            temp.push_back(arr[right]); // Add smaller element from right
            right++;
        }
    }

    // Copy any remaining elements from the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy any remaining elements from the right half
    while (right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy all merged elements back to the original array
    for (int i = st; i <= end; i++) {
        arr[i] = temp[i - st]; // i - st adjusts index for temp vector
    }
}

// Recursive function to divide the array and call merge
void mergesort(int arr[], int st, int end) {
    // Base case: if the subarray has 0 or 1 element, it's already sorted
    if (st >= end) {
        return;
    }

    // Find the middle index of the current subarray
    int mid = st + (end - st) / 2;

    // Recursively sort the left half
    mergesort(arr, st, mid);

    // Recursively sort the right half
    mergesort(arr, mid + 1, end);

    // Merge the two sorted halves
    mergearray(arr, st, mid, end);
}

int main() {
    int arr[6] = {23, 45, 2, 66, 43, 6}; // Input array
    int n = 6;

    // Call the merge sort function
    mergesort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
