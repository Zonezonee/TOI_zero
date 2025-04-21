#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int mx = 0, cnt = 0;
    while(n--){
        int a; cin >> a;
        if(a > mx){
            mx = a;
            cnt = 1;
        }else if(a == mx){
            cnt++;
        }
    }
    cout << mx << '\n' << cnt << '\n';
}