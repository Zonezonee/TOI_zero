#include <bits/stdc++.h>
using namespace std;

int a[1010][1010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, bx, by;
    cin >> n >> m >> bx >> by;
    int k;
    cin >> k;
    int cnt = 0;
    while(k--){
        int x, y;
        cin >> x >> y;
        a[x][y] = 100;
        for(int i = -1; i <= 1; ++i){
            for(int j = -1; j <= 1; ++j){
                if(x+i < 0 || x+i >= n || y+j < 0 || y+j >= m) continue;
                a[x+i][y+j] = max(a[x+i][y+j], 60);
            }
        }
        for(int i = -2; i <= 2; ++i){
            for(int j = -2; j <= 2; ++j){
                if(x+i < 0 || x+i >= n || y+j < 0 || y+j >= m) continue;
                a[x+i][y+j] = max(a[x+i][y+j], 20);
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cnt += (a[i][j] == 0);
        }
    }
    cout << cnt << '\n' << a[bx][by] << "%\n";
}