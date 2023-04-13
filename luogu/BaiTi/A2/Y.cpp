#include <bits/stdc++.h>

int n, b;

void Solve() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &b);
    printf("%d\n", 3 * (10 - n) * (9 - n));
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--)
        Solve();

    return 0;
}
