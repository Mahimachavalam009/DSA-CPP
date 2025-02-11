#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0, i = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * pow(2, i);
        n /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int binary = 1011;
    cout << "Decimal: " << binaryToDecimal(binary);
    return 0;
}


o/p : Decimal: 11
