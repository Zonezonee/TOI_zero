#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    for(char &c : s) c = tolower(c);
    s = ' ' + s;
    int mx = 0, cur = 0;
    bool unknown = true;
    for(int i = 1; i <= n; ++i){
        if(s[i] == 'a'){
            unknown = false;
            cur++;
            mx = max(mx, cur);
            if(s[i-1] != 'a' && s[i-1] != 'r' && s[i-1] != ' '){
                cout << "no " << i-1 << '\n';
                return 0;
            }
        }else if(s[i] == 'r'){
            unknown = false;
            cur = 0;
            if(i == n){
                cout << "no " << i-1 << '\n';
                return 0;
            }
            if(s[i+1] != 'a'){
                cout << "no " << i << '\n';
                return 0;
            }
        }else if(s[i] == 'b'){
            unknown = false;
            cur = 0;
            if(i == n){
                cout << "no " << i-1 << '\n';
                return 0;
            }
            if((s[i+1] != 'i' && s[i+1] != 't')){
                cout << "no " << i << '\n';
                return 0;
            }
            
        }
    }
    if(unknown) cout << "unknown " << n << '\n';
    else cout << "yes " << mx << '\n';
}