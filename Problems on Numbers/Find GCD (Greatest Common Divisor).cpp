 Logic:

Use Euclidean Algorithm → GCD(a, b) = GCD(b, a % b).

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56, b = 98;
    cout << "GCD: " << gcd(a, b);
    return 0;
}

o/p: GCD: 14
