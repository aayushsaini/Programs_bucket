#include <stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "\n->";
    cin >> a;
    cout << "\n->";
    cin >> b;
    int x = min(a,b);
    int ans = 1;
    for (int i = 1; i <= x; i++) {
        if (a%i==0 and b%i==0) {
            cout << a << b << "divided by" << i << endl;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
