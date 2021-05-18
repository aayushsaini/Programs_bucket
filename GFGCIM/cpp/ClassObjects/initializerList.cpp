#include <iostream>
using namespace std;
//To be redone
class First {
    public:
        First() { cout << "Non Param"; }
        First(int x) { cout << "Params"; }
        // First:x(0) { cout << "Params"; }
};

class Second {
    First x;
    public:
        Second() {
            x = First(10);
        }
};

int main() {
    First s;
    s = First(10);
    return 0;
}