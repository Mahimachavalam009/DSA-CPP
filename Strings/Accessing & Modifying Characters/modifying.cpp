✅ Use at(i) for safer access (throws an error if out of bounds).

  #include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    str[0] = 'Y';  // Change first character
    cout << str << endl; // Output: Yello
    return 0;
}
