#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(auto &e : a) cin >> e;
    sort(a, a+n);
    long long res = 0;
    for(int i = 0; i < n; ++i){
        if(i != 0) a[i] += a[i-1];
        res += a[i]*2;
    }
    cout << res << '\n';
}