#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) a[i][j] = '.';
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            char c;
            cin >> c;
            if(a[i][j] == '.') a[i][j] = c;
            if(c == '*') a[min(n-1, i+1)][j] = '*';
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}