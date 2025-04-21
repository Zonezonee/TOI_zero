#include <bits/stdc++.h>
using namespace std;

int a[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, h, m, n;
    cin >> w >> h >> m >> n;
    vector<int> verti, hori;
    for(int i = 0; i < m; ++i){
        cin >> a[i];
        if(i == 0) hori.push_back(a[i]);
        else if(i == m-1){
            hori.push_back(a[i]-a[i-1]);
            hori.push_back(w-a[i]);
        }
        else hori.push_back(a[i]-a[i-1]);
    }
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i == 0) verti.push_back(a[i]);
        else if(i == n-1){
            verti.push_back(a[i]-a[i-1]);
            verti.push_back(h-a[i]);
        }
        else verti.push_back(a[i]-a[i-1]);
    }
    sort(verti.begin(), verti.end(), greater<int>());
    sort(hori.begin(), hori.end(), greater<int>());
    cout << verti[0]*hori[0] << ' ' << max(verti[0]*hori[1], verti[1]*hori[0]) << '\n';
}