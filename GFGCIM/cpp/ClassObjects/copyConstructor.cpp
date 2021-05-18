#include <iostream>
using namespace std;

class T {
    int *ptr;
    public:
        T(int x) {          //Without copy constructor, the default constructor shallow copies other object's data
            ptr = new int(x);
        }
        T(T &x) {           //Copy constructor enables deep copy mechanism
            int val = *(x.ptr);
            ptr = new int(val);
        }
        void set(int x) {
            *ptr = x;
        }
        void disp() {
            cout << "\nval: " << *ptr << endl;
        }
};

int main() {
    T x(10);
    // T y = x;
    T y(x);
    x.set(20);
    y.disp();
    x.disp();
    return 0;
}