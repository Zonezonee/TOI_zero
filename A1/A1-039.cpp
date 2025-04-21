#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long double res = 1;
    for(int i = 2; i <= n; ++i) res *= i;
    cout << fixed << setprecision(0) << res;
}