Method 3: User Input (Loop-Based)

✅ Takes input from the user and prints it as a matrix.

  #include <iostream>
using namespace std;

int main() {
    int arr[2][2];

    cout << "Enter 4 numbers: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the 2D Array
    cout << "Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
