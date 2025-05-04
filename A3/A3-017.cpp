#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, l, n, m;
    cin >> w >> l >> m >> n;
    int res = 1e9;
    for(int i = m; i <= n; ++i){
        res = min(res, (w%i)*(l%i));
    }
    cout << res << '\n';
}