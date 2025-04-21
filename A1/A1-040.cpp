#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    const int a[] = {0, 100, 120, 200, 60};
    int res = 0;
    while(1){
        int n; cin >> n;
        if(n == 5){
            cout << "Bye Bye\n" << "Total Calories: " << res << '\n';
            return 0;
        }
        res += a[n];
    }
}