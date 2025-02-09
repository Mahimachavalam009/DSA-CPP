#  Accessing Characters ([] or .at())

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    
    cout << "First char: " << str[0] << endl; // Using []
    cout << "Last char: " << str.at(str.length() - 1) << endl; // Using at()
    return 0;
}
