#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if(a == b) cout << int(1e6) << '\n';
    else if(a.substr(2, 5) == b.substr(2, 5)) cout << int(1e5) << '\n';
    else if(a[0] == b[0] && a.substr(4, 3) == b.substr(4, 3)) cout << 2000 << '\n'; 
    else if(a[0] == b[0] && a.substr(5, 2) == b.substr(5, 2)) cout << 1000 << '\n';
    else if(a.substr(4, 3) == b.substr(4, 3)) cout << 200 << '\n';
    else if(a.substr(5, 2) == b.substr(5, 2)) cout << 100 << '\n';
    else if(a[0] == b[0]) cout << 20 << '\n';
    else cout << 0 << '\n';
}