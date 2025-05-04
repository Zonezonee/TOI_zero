#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n;
    cin >> l >> n;
    int sum = 0;
    for(int i = 1; i <= l; ++i){
         sum += i*i;
         if(sum > n){
            cout << l-i+1 << '\n';
            return 0;
        }
         else if(sum == n){
            cout << l-i << '\n';
            return 0;
        }
    }
}