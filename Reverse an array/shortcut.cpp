# using reverse() function
#✅ reverse(arr, arr + n) reverses the array in-place.

  
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, arr + n); // Reverse the array

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
