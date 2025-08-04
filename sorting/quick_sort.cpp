#include <bits/stdc++.h>
using namespace std;

// Partition function using Hoare’s method (pivot = first element)
int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // Choosing the first element as pivot
    int i = low;
    int j = high;

    while (i < j) {
        // Move i to the right until an element > pivot is found
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        // Move j to the left until an element <= pivot is found
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        // If i is still less than j, swap arr[i] and arr[j]
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Place the pivot in its correct position
    swap(arr[low], arr[j]);

    return j;  // Return the final position of the pivot
}

// Quick Sort function (recursive)
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get pivot index
        int pindex = partition(arr, low, high);

        // Recursively sort left and right subarrays
        quicksort(arr, low, pindex - 1);
        quicksort(arr, pindex + 1, high);
    }
}

int main() {
    int arr[6] = {34, 56, 44, 6, 1, 23};
    int n = 6;

    // Call quicksort with correct indices
    quicksort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
