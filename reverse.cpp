#include <iostream>
#include <cmath>
using namespace std;

int digits(int n) {
    return (int) log10(n);
}

int reverse(int n) {
    int sum = 0, c = digits(n);

    while (n != 0) {
        sum *= 10;
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number you want to reverse: ";
    cin >> n;

    cout << reverse(n) << endl;

    return 0;
}