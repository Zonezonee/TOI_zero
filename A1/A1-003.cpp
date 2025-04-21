#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = -1e9;
    for(int i = 0, a; i < 3; ++i){
        cin >> a;
        n = max(n, a);
    }
    cout << n << '\n';
}