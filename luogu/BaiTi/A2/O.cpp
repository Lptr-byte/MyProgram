#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, v[2], cnt, x, y;
string s;

void Solve() {
    memset(v, 0, sizeof(v));
    x = y = 0;
    cnt = 1;
    cin >> n >> s;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(s[0] == '1')
        x++;
    else
        y++;
    for(int i = 1; i < n; i++){
        if(s[i] == '1')
            x++;
        else
            y++;
        if(s[i] == s[i - 1])
            cnt++;
        if(s[i] != s[i - 1] || i == n - 1)
            v[s[i - 1] - '0'] = max(v[s[i - 1] - '0'], cnt), cnt = 1;
    }
    cout << max(x * y, max(v[0] * v[0], v[1] * v[1])) << endl;
}

signed main(){
    freopen("./out/O.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}