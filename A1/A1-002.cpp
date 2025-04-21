#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    const int a[] = {10, 5, 2, 1};
    for(int i = 0; i < 4; ++i){
        cout << a[i] << " = " << n/a[i] << '\n';
        n%=a[i];
    }
}