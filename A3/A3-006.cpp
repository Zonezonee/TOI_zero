#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+10;

int a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    vector<int> v;
    for(int i = 1; i <= 200; ++i){
        for(int j = 1; j <= 9; ++j) v.push_back(i*2);
        v.push_back(i);
    }
    sort(a+1, a+n+1, greater<int>());
    sort(v.begin(), v.end());
    int res = 0;
    for(int i = 1; i <= n; ++i){
        res += v[i-1]*a[i];
    }

    cout << res << '\n';
}