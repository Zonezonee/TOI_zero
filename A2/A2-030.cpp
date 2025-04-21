#include <bits/stdc++.h>
using namespace std;

int r[6], c[6];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 5;
    for(int i = 1; i <= n; ++i){
        for(int j = 1, a; j <= n; ++j){
            cin >> a;
            a &= 1;
            r[i] += a;
            c[j] += a;
        }
    }
    bool ok = true;
    for(int i = 1; i <= n; ++i){
        if(r[i]&1){
            cout << i-1 << ' ';
            ok = false;
        }
    }
    if(ok) cout << -1 << ' ';
    ok = true;
    for(int i = 1; i <= n; ++i){
        if(c[i]&1){
            cout << i-1 << '\n';
            ok = false;
        }
    }
    if(ok) cout << -1 << '\n';
}