#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, res = 1e9;
    cin >> n;
    while(n--){
        int a; cin >> a;
        res = min(res, a);
    }
    cout << res;
}