#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+10;

int par[N];
bitset<N> cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> par[i];
    int i = k;
    while(cnt[i] != 1){
        cnt[i] = 1;
        i = par[i];
        if(i == 0) break;
    }
    cout << cnt.count() << '\n';
}