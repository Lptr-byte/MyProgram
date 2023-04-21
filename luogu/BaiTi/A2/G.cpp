#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, ans;
string s;

void Solve() {
    ans = 0;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++)
        ans = max(ans, (int)(s[i] - 'a' + 1));
    cout << ans << endl;
}

signed main(){
    freopen("./out/G.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}