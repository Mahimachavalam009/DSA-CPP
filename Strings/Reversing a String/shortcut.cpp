✅ reverse(str.begin(), str.end()) efficiently reverses the string.
  Using reverse() (STL Shortcut)


  
#include <iostream>
#include <algorithm>  // Required for reverse()
using namespace std;

int main() {
    string str = "Hello";

    reverse(str.begin(), str.end());  // Reverse string in-place
    cout << str << endl;  // Output: olleH

    return 0;
}
