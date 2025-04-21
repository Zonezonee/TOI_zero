#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    a += b/21;
    if(a == 13) a = 1;
    if(a < 4) cout << "winter\n";
    else if(a < 7) cout << "spring\n";
    else if(a < 10) cout << "summer\n";
    else cout << "fall\n";
}