#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string first;
        string last;

        void PrintFullName() {
            cout << first << " " << last << endl;
        }
};

int main() {
    Person p;
    p.first = "Jane";
    p.last = "Doe";

    p.PrintFullName();

    //CLASS: describes the structure
    //OBJECT: a specific example of that structure
    
    return 0;
}
