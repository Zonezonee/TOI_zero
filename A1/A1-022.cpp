#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    const int a[] = {0, 20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 22, 22};
    const string s[] = {"", "capricorn", "aquarius", "pisces", "aries", "taurus", "gemini", "cancer", "leo", "virgo", "libra", "scorpio", "sagittarius"};
    if(n >= a[m]) m++;
    if(m == 13) m = 1;
    cout << s[m] << '\n';
}