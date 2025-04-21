#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int par[N], mx = 0, cnt;
bool vis[N];
int fp(int u){
    cnt++;
    vis[u] = true;
    return (u == par[u] || vis[par[u]] ? u : par[u] = fp(par[u]));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> par[i];
    }
    for(int i = 1; i <= n; ++i){
        cnt = 0;
        if(vis[i]) continue;
        fp(i);
        mx = max(mx, cnt);
    }
    cout << mx << '\n';
}