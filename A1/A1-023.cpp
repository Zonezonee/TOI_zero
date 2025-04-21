#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char c;
    cin >> n >> c;
    c = tolower(c);
    int b = 100, f = 0;
    if(c == 'f') b = 212, f = 32;
    if(n <= f) cout << "solid\n";
    else if(n >= b) cout << "gas\n";
    else cout << "liquid\n";
}