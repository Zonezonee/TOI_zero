#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 10;
    map<int, bool> mp;
    for(int i = 0 ; i < n; ++i){
        int a; cin >> a;
        if(mp.find(a) == mp.end()) cout << a << ' ';
        mp[a] = true;
    }
}