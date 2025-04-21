#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    string t = s;
    for(char &c : t) c = toupper(c);
    const string buu = "BUU";
    int b = -1, mx_u = 0;
    bool bu = false;
    
    for(int i = 0; i < n; ++i){
        if(t[i] == 'B'){
            if(i <= n-3){
                if(t.substr(i, 3) == buu){
                    bu = true;
                    for(int j = i+1; j < n && t[j] == 'U'; ++j){
                        mx_u = max(mx_u, j-i);
                    }
                }
            }
            if(b == -1) b = i;
        }
    }
    if(!bu){
        if(b == -1){
            int i = 0;
            for(int i = 0; i < n; ++i){
                cout << buu[i%3];
            }
        }else{
            for(int i = 0; i <= b; ++i) cout << s[i];
            for(int i = b+1; i < n; ++i) cout << "U";
        }
    }else{
        cout << "Yes " << mx_u << '\n';
    }
}