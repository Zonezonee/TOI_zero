#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        char c; cin >> c;
        cnt += (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
    cout << cnt << '\n';
}