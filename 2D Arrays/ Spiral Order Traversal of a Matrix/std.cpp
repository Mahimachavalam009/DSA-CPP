A spiral order traversal means printing a 2D matrix in a clockwise spiral pattern starting from the top-left corner.
  
#include <iostream>
using namespace std;

void spiralOrder(int arr[3][3], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Traverse bottom row (if still valid)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Traverse left column (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
}

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    cout << "Spiral Order: ";
    spiralOrder(arr, 3, 3);
    return 0;
}





Understanding the code : 
🔹 Variables Used
top → Tracks the top boundary
bottom → Tracks the bottom boundary
left → Tracks the left boundary
right → Tracks the right boundary
🔹 How It Works
1️⃣ Start from top row, move left to right
2️⃣ Move down along right column
3️⃣ Move right to left on bottom row (if valid)
4️⃣ Move bottom to top on left column (if valid)
5️⃣ Shrink boundaries and repeat for the inner layers

 Time Complexity Analysis
Each element is visited once → O(N×M) (where N = rows, M = cols)
Efficient for large matrices ✅
