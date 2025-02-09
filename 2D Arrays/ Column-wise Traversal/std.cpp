📌 Why is this important?

Some problems require column-wise traversal instead of row-wise.


#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    cout << "Column-wise Traversal:\n";
    for (int j = 0; j < 3; j++) {  // Iterate through columns first
        for (int i = 0; i < 3; i++) {  // Then iterate rows
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



1  4  7  
2  5  8  
3  6  9 
