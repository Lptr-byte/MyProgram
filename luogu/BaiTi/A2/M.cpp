#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

void Solve() {
    cin >> n;
    int now, ans = n / 2;
    cout << ans << " ";
    for(int i = 1; i <= n - 2; i++){
        if(i & 1)
            now = n / 2;
        else
            now = -(n / 2 + 1);
        ans += now;
        cout << ans << " ";
    }
    cout << ans + n / 2 << endl;
}

signed main(){
    freopen("./out/M.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}