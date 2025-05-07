#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x, y;
    cin >> x >> y;
    int res = 0;
    for(int i = 0; i <= min(a, c); ++i){
        for(int j = 0; j <= min(b, d); ++j){
            res = max(res, min(i+j, x) + min(min(a-i, d-j) + min(c-i, b-j), y));
        }
    }
    cout << res << '\n';
}