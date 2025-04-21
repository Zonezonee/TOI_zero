#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if((!(n%4) && (n%100)) || !(n%400) || n == 1500) cout << "yes\n";
    else cout << "no\n";
}