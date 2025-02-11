#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    int binary[32], i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
}

int main() {
    int decimal = 11;
    cout << "Binary: ";
    decimalToBinary(decimal);
    return 0;
}


o/p : Binary: 1011
