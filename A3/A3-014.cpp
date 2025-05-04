#include <bits/stdc++.h>
using namespace std;

int u18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        if(a <= 18) u18++;
    }
    cout << (n-u18)+max(n-u18-1, u18) << '\n';
}