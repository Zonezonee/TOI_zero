#include <bits/stdc++.h>
using namespace std;

int cnt[305];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        cnt[a]++;
    }
    int mn = *min_element(cnt+1, cnt+k+1);
    cout << n - mn*k << '\n';
}