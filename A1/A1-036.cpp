#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n -= n%10;
    for(; n >= 0; n -= 10) cout << n << ' ';
}