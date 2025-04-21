#include <bits/stdc++.h>
using namespace std;

int sweep[610];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n;
    cin >> l >> n;
    for(int i = 1; i <= n; ++i){
        int a, b;
        cin >> a >> b;
        sweep[a*2+1]++;
        sweep[b*2]--;
    }
    int ans = 0;
    for(int i = 1; i <= l*2; ++i){
        sweep[i] += sweep[i-1];
        ans = max(ans, sweep[i]);
    }
    cout << ans << '\n';
    
}