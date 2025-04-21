#include <bits/stdc++.h>
using namespace std;

int a[50][50];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
        }
    }
    vector<int> v[2];
    for(int i = 1; i <= n; ++i) v[0].push_back(i);
    while(v[0].size() > 1){
        for(int i = 0; i < v[0].size(); i += 2){
            if((v[0][i] == m || v[0][i+1] == m) && a[v[0][i]][v[0][i+1]] != m){
                v[1].push_back(m);
                m = 0;
            }else v[1].push_back(a[v[0][i]][v[0][i+1]]);
        }
        swap(v[0], v[1]);
        v[1].clear();
    }
    cout << v[0][0] << '\n';
}