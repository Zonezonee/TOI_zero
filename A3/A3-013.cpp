#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, mx = 0, mn = 0;
    cin >> n >> s;
    while(n--){
        int h;
        cin >> h;
        if((h%3 == 0) && (h%4 == 0)){
            mx += 10*h/3;
            mn += 10*h/4;
        }else if(h%3 == 0) s -= 10*h/3;
        else s -= 10*h/4;
    }
    cout << s-mx << ' ' << s-mn << '\n';
}