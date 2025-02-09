#  Using find() Function (Shortcut)
#  find(arr, arr + n, key) returns an iterator to the found element.
✅ If it != arr + n, the element exists. Otherwise, it doesn't.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 30;
    auto it = find(arr, arr + n, key); // Find the element

    if (it != arr + n)
        cout << "Element found at index: " << (it - arr) << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
