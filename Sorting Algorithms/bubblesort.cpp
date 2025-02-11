#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Passes
        for (int j = 0; j < n - i - 1; j++) {  // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // Swap if left > right
            }
        }
    }
}

int main() {
    int arr[] = {4, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

O/P : 1 2 4 8

Time Complexity:

Best Case (Already Sorted): O(n)
Worst Case: O(n²)    
