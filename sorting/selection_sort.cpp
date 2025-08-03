 
// ----------------------------selection sort-------------------------------------------

#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

// Function to perform Selection Sort
void selection_sort(int arr[], int n) {
    // Loop over each element except the last one
    for (int i = 0; i < n - 1; i++) {
        int min = i;  // Assume current index 'i' has the smallest element

        // Check the rest of the array to find the actual minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;  // Update 'min' if a smaller element is found
            }
        }

        // Swap the smallest found element with the element at index 'i'
        swap(arr[min], arr[i]);
    }
}

int main() {
    // Initialize an array with 6 integers
    int arr[6] = {23, 43, 55, 33, 67, 3};
    int n = 6;  // Size of the array

    // Call the selection sort function to sort the array
    selection_sort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;  // End of program
}
