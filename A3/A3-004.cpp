#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pair<int, int> a[n];
    int x[n], y[n];
    // for(auto &[x, y] : a) cin >> x >> y;
    for(int i = 0; i < n; ++i) cin >> x[i] >> y[i];
    // sort(a, a+n);
    sort(x, x+n);
    sort(y, y+n);
    // for(auto &[x, y] : a) cout << x << ' ' << y << '\n';
    pair<float, float> median;
    if(n&1){
        median = {x[n/2], y[n/2]};
    }else{
        median = {(x[n/2]+x[n/2-1])/2.0, (x[n/2]+y[n/2-1])/2.0};
    }
    // median = a[n/2];
    // cout << median.first << ' ' << median.second << '\n';
    int dif = median.first - median.second;
    long long res = 0;
    for(int i = 0; i < n; ++i){
        res += abs(dif - (x[i]-y[i]));
        x[i] += (dif - (x[i]-y[i]))/2;

        res += abs(median.first - x[i])*2;
    }
    cout << res << '\n';
}