#include <bits/stdc++.h>
#define int long long
using namespace std;

int m, s, v[1005], a, sum, Max;

void Solve() {
    memset(v, 0, sizeof(v));
    Max = sum = 0;
    cin >> m >> s;
    for(int i = 1; i <= m; i++){
        cin >> a;
        v[a] = 1;
        Max = max(Max, a);
    }
    int now = 1;
    while(sum < s){
        if(v[now]){
            now++;
            continue;
        }
        sum += now;
        now++;
        m++;
    }
    if(sum == s && m >= Max)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main(){
    freopen("./out/I.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}