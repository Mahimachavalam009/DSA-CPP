✅ A palindrome reads the same forward and backward.


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "madam";
    string rev = str;
    
    reverse(rev.begin(), rev.end());  // Reverse string
    
    if (str == rev)
        cout << "Palindrome!" << endl;
    else
        cout << "Not a palindrome!" << endl;

    return 0;
}
