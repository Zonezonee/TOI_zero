#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int h[N], pre[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, mx = 0;
    cin >> n >> l;
    for(int i = 1; i <= n; ++i){
        cin >> h[i];
        pre[i] = (h[i] > mx ? 0 : mx+1-h[i]);
        mx = max(mx, h[i]);
    }
    while(l--){
        int a; cin >> a;
        cout << pre[a] << '\n';
    }
}