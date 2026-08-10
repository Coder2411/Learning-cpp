#include <iostream>
using namespace std;

int sum(int num);

int main() {
    int num = 25;
    cout << sum(num) << endl;

    return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }

    int s = n + sum(n-1);
    return s;
}