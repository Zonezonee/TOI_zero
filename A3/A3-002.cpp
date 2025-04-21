#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int flr = 1;
    for(; flr*flr < n; ++flr);
    flr--;
    cout << 2*flr-1+((n-flr*flr)&1);
}