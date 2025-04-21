#include <bits/stdc++.h>
using namespace std;

map<int, pair<int, int>> sum, dif;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; ++i){
        int x, y;
        cin >> x >> y;
        if(sum.find(x+y) == sum.end()) sum[x+y] = {2e9, -2e9};
        if(dif.find(x-y) == dif.end()) dif[x-y] = {2e9, -2e9};
        sum[x+y].first = min(sum[x+y].first, x);
        sum[x+y].second = max(sum[x+y].second, x);
        dif[x-y].first = min(dif[x-y].first, y);
        dif[x-y].second = max(dif[x-y].second, y);
        res = max({res, sum[x+y].second-sum[x+y].first, dif[x-y].second-dif[x-y].first});
    }
    cout << res;
}