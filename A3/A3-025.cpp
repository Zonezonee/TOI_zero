#include <bits/stdc++.h>
using namespace std;

int a[10][int(1e5+10)];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, w, l;
    cin >> n >> w >> l;
    bitset<int(1e5+10)> ans;
    ans.set();
    for(int i = 0; i < n; ++i){
        int k; cin >> k;
        while(k--){
            int x; cin >> x;
            a[i][max(1, x-l)]++;
            a[i][x+l+1]--;
        }
        for(int j = 1; j <= w; ++j){
            if(j > 0) a[i][j] += a[i][j-1];
        }
    }
    for(int j = 1; j <= w; ++j){
        bool ok = true;
        for(int i = 0; i < n; ++i){
            if(a[i][j] == 0) ok = false;
        }
        if(ok){
            cout << 1 << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
}