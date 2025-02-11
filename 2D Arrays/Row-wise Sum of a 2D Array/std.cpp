 Given a matrix, print the sum of each row separately.


   #include <iostream>
using namespace std;

void rowWiseSum(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    rowWiseSum(arr, 2);
    return 0;
}


o/p :Sum of row 1: 6  
Sum of row 2: 15  
