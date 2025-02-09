# traditional method using loops

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2, count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    cout << "Count of " << key << " is: " << count << endl;
    return 0;
}
