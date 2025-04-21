#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    const string s[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int n;
    cin >> n;
    if(n < 0) cout << "Error : Please input positive number";
    else if(n > 9 || n < 1) cout << "Error : Out of range\n";
    else cout << s[n] << '\n';
}