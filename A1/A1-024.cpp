#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    const int A[3][3] = {{1250, 1400, 2000}, {1100, 1300, 1700}, {1000, 1200, 1500}};
    if(n <= 1990) n = 0;
    else if(n <= 1999) n = 1;
    else n = 2;
    if(m <= 1500) m = 0;
    else if(m <= 2000) m = 1;
    else m = 2;
    cout << A[n][m] << '\n';
}