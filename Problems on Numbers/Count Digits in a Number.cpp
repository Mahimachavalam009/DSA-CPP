Logic:

Divide by 10 until n = 0.

  #include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int num = 12345;
    cout << "Digits: " << countDigits(num);
    return 0;
}


o/p : Digits: 5
