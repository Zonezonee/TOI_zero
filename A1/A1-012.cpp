#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    char op;
    cin >> a >> op;
    int b = a/10 + a%10*10;
    cout << a << ' ' << op << ' ' << b << " = ";
    if(op == '+') cout << a+b << '\n';
    else cout << a*b << '\n';
}