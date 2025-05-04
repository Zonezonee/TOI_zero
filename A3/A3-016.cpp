#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> contain[N];
int rule[N], cnt[N];
bitset<N> vis;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> cnt[i];
        for(int j = 0; j < cnt[i]; ++j){
            int a; cin >> a;
            contain[a].push_back(i);
        }
        cin >> rule[i];
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    int res = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        res++;
        for(int idx : contain[u]){
            if(vis[rule[idx]]) continue;
            if(--cnt[idx] == 0){
                vis[rule[idx]] = 1;
                q.push(rule[idx]);
            }
        }
    }
    cout << res << '\n';
}