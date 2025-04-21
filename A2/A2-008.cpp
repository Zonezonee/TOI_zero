#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        int x; cin >> x >> a[i];
    }
    reverse(a, a+n);
    int mx = a[0], res = 0;
    for(int i = 1; i < n; ++i){
        if(mx < a[i]) mx = a[i];
        else res++;
    }
    cout << res << '\n';
}