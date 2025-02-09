#  Using *min_element() and *max_element() (Shortcut)
# min_element() and max_element() are built-in STL functions that quickly find the smallest and largest elements.




#include <iostream>
#include <algorithm> // Required for min_element and max_element
using namespace std;

int main() {
    int arr[] = {23, 12, 56, 78, 10, 34};
    int n = sizeof(arr) / sizeof(arr[0]); // Get size of array

    cout << "Minimum: " << *min_element(arr, arr + n) << endl;
    cout << "Maximum: " << *max_element(arr, arr + n) << endl;
    return 0;
}
