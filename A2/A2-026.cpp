#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);
    int cnt = 0;
    for(auto &[a, b] : v){
        cin >> b >> a;
        if(a > 15) cnt++;
    }
    sort(v.begin(), v.end());
    cout << cnt << '\n';
    cout << v.back().second << ' ' << v.back().first << '\n';
}