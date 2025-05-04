#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, t;
    cin >> n >> k >> t;
    t--;
    int i = k, res = 2;
    set<int> s;
    while(s.size() < n && i != t && i != 0){
        res++;
        i = (i+k)%n;
    }
    if(i == 0) res--;
    cout << res << '\n';
}