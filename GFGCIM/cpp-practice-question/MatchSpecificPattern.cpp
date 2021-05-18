#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern) {
    int cur = 0, f = 1;
    int ctr = 0, ctr2 = 0;
    char p = dict[0][0];
    for (int i = 0; i < dict.size(); ++i) {
        while(ctr2 < dict[i].size()) {
            if (dict[i][cur] == p) {
                ctr += 1;
            } else {
                
            }
            ctr2++;
        }
    }
    return dict;      
}

int main() {
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i];
    string tt;
    cout << "\nPatern: ";
    cin>>tt;
    vector<string> res = findMatchedWords(s,tt);
    // for (int i = 0; i < res.size(); ++i) {
    //     cout << res[i] << " ";
    // }
    
    return 0;
}