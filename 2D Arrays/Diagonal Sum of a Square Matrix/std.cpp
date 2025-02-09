#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += arr[i][i];  // Sum of main diagonal
    }

    cout << "Diagonal Sum: " << sum << endl;
    return 0;
}


o/p : Diagonal Sum: 15  (1 + 5 + 9)
