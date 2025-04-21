#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        int a, b;
        cin >> a >> b;
        sum += max(a, b);
        if(n == 1) continue;
        cout << max(a, b);
        if(i == n) cout << " = ";
        else cout << " + ";
    }
    cout << sum << '\n';
}