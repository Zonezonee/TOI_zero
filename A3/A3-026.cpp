#include <bits/stdc++.h>
using namespace std;

//* = 42, + = 43, - = 45, x = 120
char cal(char lhs, char rhs){
    if(lhs == '-' && rhs == '-') return '-';
    if(lhs == '+' && rhs == '-') return '+';
    if(lhs == '-' && rhs == 'x') return 'x';
    if(lhs == '+' && rhs == 'x') return '*';
    return 'O';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            char c;
            cin >> c;
            cout << cal(a[i][j], c);
        }
        cout << '\n';
    }
}