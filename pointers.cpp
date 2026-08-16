#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    cout << a << endl;    //output: 10
    cout << &a << endl;   //output: address
    cout << p << endl;    //output: address
    cout << *p << endl;   //output: 10

    return 0;
}