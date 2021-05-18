#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "\n->";
    cin >> a;
    for (int i = 1; i <= a; i++) {
        for (int j = a-i; j > 0; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*"; // NOTE: Just add a space after or before * for full traingle
        }
        cout << endl;
    }

    return 0;
}