#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string first;
        string last;

    public:
        void setFirstName(string first) { this->first = first; }
        void setLastName(string last) { this->last = last; }
        void printFullName() { cout << first << " " << last << endl; }
};

int main() {
    Person p, p2;
    p.setFirstName("Jane");
    p.setLastName("Doe");

    p.printFullName();

    //Person p2;
    p2.setFirstName("John");
    p2.setLastName("Lennon");

    p2.printFullName();

    return 0;
}