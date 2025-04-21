#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    char b;
    cin >> a >> b;
    if(a <= 18 || b == 's' || b == 'S') cout << 20 << '\n';
    else cout << 50 << '\n';
}