#include <bits/stdc++.h>
using namespace std;
const int N = 303;

int a[N], b[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    a[0] = b[0] = 1;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    int res = 0;
    for(int i = 0; i < n; ++i){
        int l1 = min(a[i], a[i+1]), r1 = max(a[i], a[i+1]);
        int l2 = min(b[i], b[i+1]), r2 = max(b[i], b[i+1]);
        if((l1 > l2 && l1 < r2 && r1 > r2) || (l2 > l1 && l2 < r1 && r2 > r1) || (l1 == l2 && r2 == r1)){
            // cout << i << '\n';
            res++;
        }
    }
    cout << res << '\n';
}