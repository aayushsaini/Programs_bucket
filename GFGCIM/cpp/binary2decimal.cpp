#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int bn;
    cin >> bn;
    int dn = 0;
    int i = 0;
    while (bn > 0) {
        dn = dn + (bn%10)*pow(2,i);
        i++;
        bn = bn/10;
    }
    cout << dn;
    return 0;
}