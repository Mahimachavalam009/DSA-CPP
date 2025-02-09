# Using Loops (Linear Search - Traditional Way)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return index of found element
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 30;
    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
