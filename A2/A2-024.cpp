#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n;
    cin >> l >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int scr[3]{};
    for(int i = 0; i < n; ++i){
        int x, s;
        cin >> x >> s;
        if(!(x%a)) scr[0] += s;
        if(!(x%b)) scr[1] += s;
        if(!(x%c)) scr[2] += s;
    }
    int win = *max_element(scr,scr+3);
    const string s[] = {"Rabbit", "Monkey", "Frog"};
    for(int i = 0; i < 3; ++i){
        if(scr[i] == win){
            cout << s[i] << ' ' << win << '\n';
        }
    }
}