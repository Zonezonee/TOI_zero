#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 305;

// a-->c, b-->d
int a[N], b[N], c[N], d[N];
int dp1[N], dp2[N];
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    for(int i = 1; i <= n; ++i) cin >> c[i];
    for(int i = 1; i <= n; ++i) cin >> d[i];
    sort(a+1, a+n+1);
    sort(b+1, b+n+1);
    sort(c+1, c+n+1);
    sort(d+1, d+n+1);
    for(int i = 1; i <= n; ++i){
        reverse(c+1, c+i+1);
        reverse(d+1, d+i+1);
        for(int j = 1; j <= i; ++j){
            dp1[i] = max(dp1[i], a[j]+c[j]);
            dp2[i] = max(dp2[i], b[j]+d[j]);
        }
        reverse(c+1, c+i+1);
        reverse(d+1, d+i+1);
    }
    int ans = 1e18;
    for(int i = 0, j = k; i <= k; ++i, --j){
        if(i > n || j > n) continue;
        ans = min(ans, max(dp1[i], dp2[j]));
    }
    cout << ans << '\n';
}