#include <stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int m = max(a,b);
    int end = a*b;
    int ans = end;

    for (int i=m; i<=end; i++) {
        if(i%a==0 and i%b==0) {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}