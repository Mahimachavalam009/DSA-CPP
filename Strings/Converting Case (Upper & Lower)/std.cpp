 Using toupper() & tolower()
✅ toupper(ch) and tolower(ch) work for individual characters.


#include <iostream>
#include <string>
#include <cctype>  // Required for toupper and tolower
using namespace std;

int main() {
    string str = "Hello World";

    // Convert to uppercase
    for (char &ch : str) ch = toupper(ch);
    cout << "Uppercase: " << str << endl;

    // Convert to lowercase
    for (char &ch : str) ch = tolower(ch);
    cout << "Lowercase: " << str << endl;

    return 0;
}
