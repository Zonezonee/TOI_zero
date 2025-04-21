#include <bits/stdc++.h>
using namespace std;

int cnt[305];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
        int a; cin >> a;
        cnt[a]++;
    }
    cout << *max_element(cnt, cnt+302) << '\n';
}