#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size(), sz = 1;
    for(int i = 0; i < n-1; ++i){
        if(s[i] == s[i+1]) sz++;
        else{
            cout << sz << s[i];
            sz = 1;
        }
    }
    cout << sz << s[n-1];
}