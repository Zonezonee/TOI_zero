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
    int res = 0;
    while(k--){
        int x, y;
        cin >> x >> y;
        for(int i = -1; i <= 1; ++i){
            for(int j = -1; j <= 1; ++j){
                if(i == 0 && j == 0) continue;
                if(x+i < 0 || y+j < 0 || x+i >= n || y+j >= m) continue;
                a[x+i][y+j]++;
                res = max(res, a[x+i][y+j]);
            }
        }
    }
    cout << res << '\n';
}