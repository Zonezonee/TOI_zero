#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if(a < 5 || b < 20 || c < 25 || a+b+c < 50){
        cout << "fail\n";
    }else cout << "pass\n";
}