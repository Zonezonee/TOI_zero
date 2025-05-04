#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n+1]{};
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) a[i] += a[i-1];
    set<int> s;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            s.insert(a[i]-a[j-1]);
        }
    }
    cout << s.size() << '\n';
}