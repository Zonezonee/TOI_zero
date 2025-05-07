#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+10;

vector<pair<int ,int>> a;
vector<int> adj[365];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    for(int i = 1; i <= n; ++i){
        int l, r;
        cin >> l >> r;
        if(l < r) a.push_back({l, r});
        else a.push_back({l, r+360});
    }
    sort(a.begin(), a.end());
    int res = 0;
    for(int i = 0; i < n; ++i){
        int j = i;
        int r = a[i].second;
        while(j < n && a[j].first <= r) r = max(r, a[j++].second);
        res = max(res, r - a[i].first);
    }
    cout << min(res, 360) << '\n';
}