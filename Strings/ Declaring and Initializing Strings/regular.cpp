#  Using char[] (C-Style Strings)
#include <iostream>
using namespace std;

int main() {
    char str1[] = "Hello";  // Implicitly null-terminated
    char str2[6] = "World"; // Explicitly define size

    cout << str1 << " " << str2 << endl;
    return 0;
}

