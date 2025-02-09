#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = { {10, 20}, {30, 40} };
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += arr[i][j]; // Add each element
        }
    }

    cout << "Sum of all elements: " << sum << endl;
    return 0;
}



o/p : Sum of all elements: 100
