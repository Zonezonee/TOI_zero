#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    string res = "";
    int cnt = 0, mxcon = 0, cur = 0;
    string love = "loveLOVE";
    for(int i = 0; i < max(a.size(), b.size()); ++i){
        bool w = 0;
        if(i < a.size()) w = w || (love.find(a[i]) != string::npos);
        else w = w || (love.find(a[i%(a.size())]) != string::npos);
        if(i < b.size()) w = w || (love.find(b[i]) != string::npos);
        else w = w || (love.find(b[i%(b.size())]) != string::npos);
        if(w){
            cnt++;
            cur++;
            mxcon = max(mxcon, cur);
            res += 'w';
        }
        else{
            res += '$';
            cur = 0;
        }
    }
    cout << res;
    if(cnt&1){
        cout << mxcon << '\n';
    }else{
        if(mxcon < 2) cout << "#\n";
    }
}