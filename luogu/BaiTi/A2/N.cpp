#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a[15];

void Solve() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 2, a + n + 1);
    if(a[1] > a[2])
        cout << "NO\n";
    else
        cout << "YES\n";
}

signed main(){
    freopen("./out/N.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}