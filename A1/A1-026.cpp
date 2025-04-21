#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt[2]{};
    for(int i = 0, a; i < 3; ++i){
        cin >> a;
        cnt[a&1]++;
    }
    cout << "even " << cnt[0] << '\n' << "odd " << cnt[1] << '\n';
}