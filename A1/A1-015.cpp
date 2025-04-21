#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    int n;
    cin >> a >> b >> n;
    int n1 = a.size(), n2 = b.size();
    if(n1 > 5 && n2 > 5){
        cout << a.substr(0, 2) << b[n2-1] << n%10 << '\n';
    }else cout << a[0] << n << b[n2-1] << '\n';
}