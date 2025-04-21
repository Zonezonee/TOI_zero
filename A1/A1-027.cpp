#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for(char c : s) cout << char(tolower(c));
}