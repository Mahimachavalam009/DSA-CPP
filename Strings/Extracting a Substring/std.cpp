 Using substr(start, length)

✅ substr(start, length) extracts a part of a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Welcome to C++";
    
    string sub = str.substr(3, 5); // Extract "come "
    cout << sub << endl;
    return 0;
}
