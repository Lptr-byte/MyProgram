#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a[200005], Max, Max_s;

void Solve() {
    Max = Max_s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        Max_s = max(Max_s, min(Max, a[i]));
        Max = max(Max, a[i]);
    }
    for(int i = 1; i <= n; i++){
        if(a[i] == Max)
            cout << a[i] - Max_s << " ";
        else
            cout << a[i] - Max << " ";
    }
    cout << endl;
}

signed main(){
    freopen("./out/H.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}