#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int a[N], cnt[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> s;
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    long long less_than_k = 0;
    int discnt = 0, l = 1;
    for(int i = 1; i <= n; ++i){
        if(++cnt[a[i]] == 1) discnt++;
        while(discnt >= k){
            if(--cnt[a[l]] == 0) discnt--;
            l++;
        }
        less_than_k += (i-l+1);
    }
    cout << 1LL*n*(n+1)/2 - less_than_k << '\n';
}