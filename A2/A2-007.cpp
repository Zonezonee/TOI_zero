#include <bits/stdc++.h>
using namespace std;

pair<int, int> a[305];
int need[305], extra[305], in[305];
bool vis[305];
vector<int> adj[305];
queue<int> q;
void dfs(int u){
    vis[u] = true;
    q.push(u);
    queue<int> tmp;
    for(auto v : adj[u]){
        in[v]--;
        if(in[v] == 0){
            tmp.push(v);
        }
    }
    while(!tmp.empty()){
        int v = tmp.front(); tmp.pop();
        dfs(v);
        need[u] += need[v];
        extra[u] += extra[v];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> a[i].first >> a[i].second;
        extra[i] = 1;
    }
    set<int> s;
    while(m--){
        int a; cin >> a;
        need[a] = 1;
        extra[a] = 0;
        s.insert(a);
    }
    vector<int> ans;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(i == j) continue;
            auto [a1, b1] = a[i];
            auto [a2, b2] = a[j];
            if(a1 < a2 && b1 > b2){
                in[j]++;
                adj[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; ++i){
        if(in[i] == 0 && !vis[i]){
            dfs(i);
        }
        vector<int> tmp;
        int x = 0, y = 0;
        while(!q.empty()){
            int u = q.front(); q.pop();
            if(need[u] > x){
                x = need[u];
                y = extra[u];
                tmp.clear();
                tmp.push_back(u);
            }else if(need[u] == x){
                if(y > extra[u]){
                    y = extra[u];
                    tmp.clear();
                    tmp.push_back(u);
                }else if(y == extra[u]){
                    tmp.push_back(u);
                }
            }
        }
        for(int x : tmp) ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto x : ans) cout << x << ' ';
}