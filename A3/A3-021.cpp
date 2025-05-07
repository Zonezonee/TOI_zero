#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    long long a[n];
    for(auto &e : a) cin >> e;
    long long mn = *min_element(a, a+n);
    int res = 0;
    for(long long &e : a){
        if(1LL*k*(e-mn) < e) res++;
    }
    cout << res << '\n';
}