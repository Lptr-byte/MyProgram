#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a[100005];

void Solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
    cout << 1 << " " << n << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--)
        Solve();
}