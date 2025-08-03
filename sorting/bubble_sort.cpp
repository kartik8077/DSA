// ------------------------------------------BUBBLE SORT---------------------------------

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // Loop for each pass
    for (int i = 0; i < n - 1; i++) {
        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if in wrong order
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[6] = {23, 45, 65, 2, 6, 78};
    int n = 6;

    bubble_sort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
