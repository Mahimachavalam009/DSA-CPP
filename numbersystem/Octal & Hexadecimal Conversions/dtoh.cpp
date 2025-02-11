#include <iostream>
using namespace std;

void decimalToHex(int n) {
    char hex[32];
    int i = 0;
    while (n > 0) {
        int rem = n % 16;
        hex[i] = (rem < 10) ? (rem + '0') : (rem - 10 + 'A');
        n /= 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << hex[j];
}

int main() {
    int decimal = 26;
    cout << "Hexadecimal: ";
    decimalToHex(decimal);
    return 0;
}


o/p : Hexadecimal: 1A
