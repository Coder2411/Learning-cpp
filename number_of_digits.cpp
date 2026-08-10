#include <iostream>
#include <cmath>
using namespace std;

int digits(int n) {
    cout << "Enter an integer whose number of digits you want to check: ";
    cin >> n;
    int c = (int) log10(n);
    return c;
}

int main() {
    int n;

    int c = digits(n);

    cout << c+1 << endl;

    return 0;
}