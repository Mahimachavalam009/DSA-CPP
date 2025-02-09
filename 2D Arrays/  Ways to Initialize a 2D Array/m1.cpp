 Method 1: Direct Initialization

#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

    cout << arr[1][2]; // Output: 6
    return 0;
}


# ✅ This initializes:
1  2  3  
4  5  6  
