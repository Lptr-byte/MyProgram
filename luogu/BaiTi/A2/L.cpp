#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
string s;

void Solve() {
    stack<int> v;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'Q')
            v.push(1);
        else if(s[i] == 'A' && v.size())
            v.pop();
    }
    if(v.size())
        cout << "NO\n";
    else
        cout << "YES\n";
}

signed main(){
    freopen("./out/L.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}