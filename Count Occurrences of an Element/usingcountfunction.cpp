# using count() function
# ✅ count(arr, arr + n, key) returns how many times key appears.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int key = 2;
    cout << "Count of " << key << " is: " << count(arr, arr + n, key) << endl;
    return 0;
}
