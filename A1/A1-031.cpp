#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string res = "";
    reverse(s.begin(), s.end());
    int cnt = 0;
    for(char c : s){
        res += c;
        cnt = (cnt+1)%3;
        if(cnt == 0) res += ',';
    }
    if(!cnt) res.pop_back();
    reverse(res.begin(), res.end());
    cout << res << '\n';
}