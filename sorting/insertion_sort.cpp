
// -------------------------------------INSERTION SORT------------------------------

#include <bits/stdc++.h>
using namespace std;

// Function to perform insertion sort
void insertion(int arr[], int n) {
    // Start from the second element (first one is already "sorted")
    for(int i = 1; i < n; i++) {
        int key = arr[i];     // This is like picking the next card
        int j = i - 1;        // Start comparing with the previous card

        // Shift larger cards (elements) to the right
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Move the bigger card one step ahead
            j--;                 // Move to the next card to the left
        }

        // Insert the picked card (key) into the right position
        arr[j + 1] = key;
    }
}

int main() {
    // Example array (like cards on the table)
    int arr[6] = {5, 3, 4, 1, 6, 2};
    int n = 6;

    // Call the insertion sort function
    insertion(arr, n);

    // Print the sorted array (cards in order)
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
