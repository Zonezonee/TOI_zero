#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    queue<pair<int, int>> q;
    q.push({n-1, n-1});
    int ans = 0;
    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();
        ans++;
        if(x-1 >= 0 && a[x-1][y] == '.'){
            a[x-1][y] = 'X';
            q.push({x-1, y});
        }
        if(y-1 >= 0 && a[x][y-1] == '.'){
            a[x][y-1] = 'X';
            q.push({x, y-1});
        }
    }
    cout << ans << '\n';
}