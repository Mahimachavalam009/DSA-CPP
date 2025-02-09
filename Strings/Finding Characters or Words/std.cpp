using find()
✅ Returns starting position if found, else returns string::npos (not found).





#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Programming in C++";

    int pos = str.find("C++"); // Find position of "C++"
    
    if (pos != string::npos)  // Check if found
        cout << "Found at index: " << pos << endl;
    else
        cout << "Not found!" << endl;

    return 0;
}
