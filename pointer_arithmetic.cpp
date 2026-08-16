#include <iostream>
using namespace std;

int main() {
    int arr[] = {62, 71, 72, 74, 88};
    int* ptr = arr; // Points to arr[0]
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        cout << *ptr << endl;
        ptr++;
    }

    cout << "\n";

    for (int i = 0; i < n; i++) {
        cout << *(arr+i) << endl;
    }

    return 0;
}
