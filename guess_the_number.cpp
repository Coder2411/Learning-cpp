#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());  
    uniform_int_distribution<> distrib(1, 20);
    //setting up the random environment to generate the random number

    int num = distrib(gen);
    //the true number is hidden here

    bool t = false;
    int n;

    for (int i = 1; i <= 5; i++) {
        cout << "Guess the number from 1 to 20: ";
        cin >> n;
        if (n < num) {
            cout << "Number is less" << endl;
        } else if (n > num) {
            cout << "Number is greater" << endl;
        } else {
            t = true;
            break;
        }
    }

    if (not t) {
        cout << "Actual number was " << num << endl;
    } else {
        cout << "CORRECT ANSWER" << endl;
    }

    return 0;
}