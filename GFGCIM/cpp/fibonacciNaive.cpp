#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 1;
    int b = 1;
    int ans = 0;
    cout << "1 1 ";
    for (int i = 2; i < n; i++) {
        ans = a+b;
        a = b;
        b = ans;
        cout << ans << " ";
    }
    return 0;
}