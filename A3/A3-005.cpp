#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;

int a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for(int i = 1; i <= n; ++i) a[i] += a[i-1];
    cout << *max_element(a, a+n+1) << '\n';
}