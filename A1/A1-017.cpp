#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x[2][3];
    for(int i = 0; i < 3; ++i) cin >> x[0][i];
    for(int i = 0; i < 3; ++i) cin >> x[1][i];
    for(int i = 0; i < 3; ++i){
        if(x[0][i] < x[1][i]){
            cout << 1 << '\n';
            return 0;
        }else if(x[0][i] > x[1][i]){
            cout << 2 << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
    
}