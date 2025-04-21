#include <bits/stdc++.h>
using namespace std;

int x[300][2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char a, b, c;
    cin >> a >> b >> c;
    int n = 0;
    if(c != 'N') cin >> n;
    n *= (c == 'P' ? 15 : 10);
    bool tom = (b == 'T');
    x['S'][0] = 60;
    x['S'][1] = 80;
    x['M'][0] = 80;
    x['M'][1] = 100;
    x['L'][0] = 100;
    x['L'][1] = 120;
    cout << x[int(a)][int(tom)] + n;
}