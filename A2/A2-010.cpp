#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int mx[N];
map<int, vector<int>> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    int curd = 0, curx = 0;
    for(int i = 1; i <= n; ++i){
        int d, l;
        cin >> d >> l;
        curd += d;
        curx += l;
        if(d == 1){
            mp[curd].push_back(curx-l);
        }else{
            mp[curd-d].push_back(curx-l);
        }
    }
    mp[1].push_back(curx);
    for(auto [d, v] : mp){
        for(int i = 0; i < v.size(); i += 2){
            mx[d] = max(mx[d], v[i+1]-v[i]);
        }
    }
    for(int i = n; i >= 0; --i){
        mx[i] = max(mx[i], mx[i+1]);
    }
    for(int i = 1; i <= n; ++i) mx[i] = -mx[i];
    mx[0] = -2e9;
    while(q--){
        int x; cin >> x;
        cout << upper_bound(mx, mx+n, -x) - mx - 1 << '\n';
    }
}