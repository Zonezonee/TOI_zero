#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    bool x = (a == b || b == c || c == a), y = (a != b || b != c || c != a);
    if(x && y) cout << "neither\n";
    else if(x) cout << "all the same\n";
    else cout << "all different\n";
}