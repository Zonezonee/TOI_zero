#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    vector<pair<int, int>> a;
    for(int i = 1; i <= n; ++i){
        int s, t; cin >> s >> t;
        a.push_back({s, t});
    }
    sort(a.begin(), a.end());
    int mn = 1e9, mx = 0, res = 0;
    for(auto [l, r] : a){
        mx = max(mx, l);
        mn = min(mn, r);
        if(mx > mn){
            res++;
            mx = l;
            mn = r;
        }
    }
    cout << res+1 << '\n';
}