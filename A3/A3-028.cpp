#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    while(k--){
        int x, y;
        cin >> x >> y;
        for(int i = -1; i <= 1; ++i){
            for(int j = -1; j <= 1; ++j){
                if(x+i < 0 || y+j < 0 || x+i >= n || y+j >= m) continue;
                a[x+i][y+j]++;
            }
        }
        a[x][y] = -1e9;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << (a[i][j] < 0 ? "x" : to_string(a[i][j])) << ' ';
        }
        cout << '\n';
    }
}