#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int dfs(int u);
struct info{
    int a, l, b, r;
    info(){}
    info(int _a, int _l, int _b, int _r): a(_a), l(_l), b(_b), r(_r) {}
    int get_l(){
        if(a) return l;
        else return dfs(l);
    }
    int get_r(){
        if(b) return r;
        else return dfs(r);
    }
    
} A[1010];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        auto &[a, l, b, r] = A[i];
        cin >> a >> l >> b >> r;
    }
    dfs(1);
    cout << ans << '\n';
}
int dfs(int u){
    int L = A[u].get_l();
    int R = A[u].get_r();
    ans += abs(L-R);
    return 2*max(L, R);
}