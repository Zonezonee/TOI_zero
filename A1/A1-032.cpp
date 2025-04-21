#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < n-2*i; ++j) cout << '*';
        cout << '\n';
    }
}