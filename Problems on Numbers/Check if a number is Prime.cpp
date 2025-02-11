 Logic:

A prime number has only two factors: 1 and itself.
Check divisibility up to sqrt(n).



#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num = 29;
    cout << (isPrime(num) ? "Prime" : "Not Prime");
    return 0;
}

o/p : Prime
