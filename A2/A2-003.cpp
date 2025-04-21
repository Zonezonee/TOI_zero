#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int prev, cur, next;
    cin >> prev >> cur;
    int res = 0;
    res += (prev > cur);
    for(int i = 1; i <= n-2; ++i){
        cin >> next;
        res += (cur > prev && cur > next);
        prev = cur;
        cur = next;
    }
    res += (cur > prev);
    cout << res << '\n';
}