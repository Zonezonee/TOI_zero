#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s = "****X";
    for(int i = 0; i < n/5; ++i) cout << s;
    cout << s.substr(0, n%5);
}