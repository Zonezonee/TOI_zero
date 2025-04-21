#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    const string s[] = {"Red", "Green", "Blue"};
    int i = 0;
    char c; cin >> c;
    if(c == 'R') i = 0;
    else if(c == 'G') i = 1;
    else i = 2;
    int n; cin >> n;
    while(n--){
        cout << s[i] << ' ';
        i = (i+1)%3;
    }
}