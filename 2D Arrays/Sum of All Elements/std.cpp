Given a matrix, find the sum of all elements.


  #include <iostream>
using namespace std;

int sumMatrix(int arr[][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];  // Add each element to sum
        }
    }
    return sum;
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Sum of elements: " << sumMatrix(arr, 2, 3);
    return 0;
}



o/p : Sum of elements: 21
