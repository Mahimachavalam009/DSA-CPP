#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World C++";
    string result = "";

    for (char ch : str) {
        if (ch != ' ') { // Skip spaces
            result += ch;
        }
    }
    cout << "Without spaces: " << result << endl;
    return 0;
}
