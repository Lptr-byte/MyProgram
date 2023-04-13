#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a[55], v[55];
char t[55];
string s;

void Solve() {
    memset(v, 0, sizeof(v));
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> s;
    for(int i = 0; i < n; i++){
        if(!v[a[i]])
            t[a[i]] = s[i], v[a[i]] = 1;
        if(t[a[i]] != s[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    //freopen("./out/W.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}