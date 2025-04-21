#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n+1], b[m+1];
    a[0] = b[0] = 0;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= m; ++i) cin >> b[i];
    int res = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            int l1 = a[i], r1 = a[i+1];
            int l2 = b[j], r2 = b[j+1];
            if((i&1) == (j&1)){
                if((l1 < l2 && r2 <= r1) || (l1 > l2 && r2 >= r1)){
                    res++;
                }
            }else{
                if((l1 < r2 && l2 < r1)){
                    res++;
                }
            }
        }
    }
    cout << res+1;
}