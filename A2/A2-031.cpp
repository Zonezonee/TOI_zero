#include <bits/stdc++.h>
using namespace std;

bool valid(char a, char b){
    if(a > b) swap(a, b);
    if (a == 'A' && b == 'T' ||
        a == 'C' && b == 'G')
        return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> l;
    char a[l], b[l];
    for(int i = 0; i < l; ++i) cin >> a[i];
    for(int i = 0; i < l; ++i) cin >> b[i];
    cin >> n;
    while(n--){
        int i, idx;
        char c;
        cin >> i >> idx >> c;
        if(i == 1) a[idx] = c;
        else b[idx] = c;
    }
    int res = 0;
    for(int i = 0; i < l; ++i) cout << a[i] << ' ';
    cout << '\n';
    for(int i = 0; i < l; ++i) cout << b[i] << ' ';
    cout << '\n';
    for(int i = 0; i < l; ++i){
        res += (!valid(a[i], b[i]));
    }
    cout << res << '\n';
}