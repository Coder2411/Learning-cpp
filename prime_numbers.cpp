#include <iostream>
using namespace std;

bool prime(int n) {
    int c = 2;

    while (c != n/2) {
        if (n % c == 0) {
            return false;
        }
        c++;
    }
    return true;
}

int main() {
    int n = 6;

    bool x = prime(n);

    if (not x) {
        cout << "Number is NOT prime" << endl;
    } else {
        cout << "Number is prime" << endl;
    }
    return 0;
}