#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long res = 0;
    for(int i = 1; i <= n; ++i) res += (1LL*i*i);
    cout << res;
}