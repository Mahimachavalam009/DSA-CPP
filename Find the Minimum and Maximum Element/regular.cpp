# traditional way ( using loops)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 12, 56, 78, 10, 34};
    int n = sizeof(arr) / sizeof(arr[0]); // Find array size

    int min = arr[0], max = arr[0]; // Assume first element is min & max

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    return 0;
}
