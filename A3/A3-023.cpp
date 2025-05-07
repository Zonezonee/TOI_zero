#include <bits/stdc++.h>
using namespace std;

bitset<20000> prime;
long long dp[4][20000];
void seive(){
    prime.set();
    prime[1] = 0;
    for(int i = 2; i <= 15000; ++i){
        if(!prime[i]) continue;
        for(int j = i*2; j <= 15000; j += i) prime[j] = 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int a, b;
    cin >> a >> b;
    long long res = 0;
    dp[0][0] = 1;
    for(int i = a; i <= b; ++i){
        for(int j = 1; j <= 3; ++j) for(int k = 3*b; k >= i; --k) dp[j][k] += dp[j-1][k-i];
    }
    for(int i = a; i <= 3*b; ++i){
        res += (prime[i] ? dp[3][i] : 0);
    }
    cout << res << '\n';
}