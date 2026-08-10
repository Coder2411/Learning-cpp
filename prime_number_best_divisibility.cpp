#include <iostream>
using namespace std;

int main() {
    int n = 6, c = 2, p;
    bool b;

    while (c != n/2) {
        if (n % c == 0) {
            p = c;
            b = false;
        }
        c++;
    }
    b = true;

    
}