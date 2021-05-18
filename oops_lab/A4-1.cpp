#include <iostream>
using namespace std;

class Complex {
    private:
        float a;
        float b;
    public:
        void set(float x, float y) {
            a = x;
            b = y;
        }
        void display() {
            cout << "\n" << a << " + " << b <<  "i\n" ;
        }
        Complex sum(Complex x, Complex y) {
            Complex z;
            z.a = x.a + y.a;
            z.b = x.b + y.b;
            return z;
        }
};

int main() {
    Complex a1, a2, a3;
    a1.set(2,5);
    a2.set(1,3);
    a1.display();
    a2.display();
    a3 = a3.sum(a1, a2);
    a3.display();
    return 0;
}