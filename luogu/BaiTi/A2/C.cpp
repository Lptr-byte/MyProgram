#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a, bits[15];

void Solve() {
    int max = 0, min = 0;
    memset(bits, 0, sizeof(bits));
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        for(int j = 0; j < 11; j++)
            if(a & (1 << j))
                bits[j]++;
    }
    for(int i = 0; i < 11; i++){
        if(bits[i])
            max += (1 << i), bits[i]--;
        if(bits[i] == n - 1)
            min += (1 << i), bits[i]--;
    }
    cout << max - min << endl;
}

signed main(){
    freopen("./out/C.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
        Solve();
}