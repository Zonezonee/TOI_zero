#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n;
    cin >> l >> n;
    int layer = 1;
    for(; 1LL*layer*l*(layer*l+1)/2 < n; ++layer);
    cout << layer << '\n';
}