Logic:

Extract digits and reconstruct in reverse order.

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int num = 1234;
    cout << "Reversed: " << reverseNumber(num);
    return 0;
}


o/p: Reversed: 4321
