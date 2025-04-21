#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char a;
    string b;
    cin >> a >> b;
    bool x = (a == 'H'), y = (b == "4567");
    if(x && y) cout << "safe unlocked\n";
    else if(y) cout << "safe locked - change char\n";
    else if(x) cout << "safe locked - change digit\n";
    else cout << "safe locked\n";
}