#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a[200005], b[200005];

void Solve() {
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    cin >> n;
    for(int i = 1; i <= n - 1; i++)
        cin >> b[i];
    int i = 1;
    a[1] = b[1];
    while(i < n){
        if(b[i] >= b[i + 1])
            a[i + 1] = b[i + 1], i += 1;
        else
            a[i + 2] = b[i + 1], a[i + 1] = 0, i += 2;
    }
    for(int i = 1; i <= n + 1; i++)
        cout << a[i] << " ";
    cout << endl;
}

signed main(){
    freopen("./out/A.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}