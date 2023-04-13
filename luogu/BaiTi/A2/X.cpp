#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, q, a, t, x;

void Solve() {
    int odd = 0, even = 0, ans = 0;
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a & 1)
            odd++;
        else
            even++;
        ans += a;
    }
    for(int i = 1; i <= q; i++){
        cin >> t >> x;
        if(t){
            ans += x * odd;
            if(x & 1)
                even += odd, odd = 0;
        }
        else{
            ans += x * even;
            if(x & 1)
                odd += even, even = 0;    
        }
        cout << ans << endl;
    }
}

signed main(){
    freopen("./out/X.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}