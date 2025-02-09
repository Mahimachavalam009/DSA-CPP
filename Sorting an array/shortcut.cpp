#  Using sort() Function (Shortcut) 


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // Sort array in ascending order

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
