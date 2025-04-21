#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i]+b[i] != '9'+'0'){
            cnt++;
        }
    }
    if(cnt){
        cout << "NO " << cnt << '\n';
    }else{
        cout << "YES\n";
    }
}