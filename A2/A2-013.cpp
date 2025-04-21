#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, vector<int>> mp;
    mp['H'] = {5};
    mp['O'] = {3};
    mp['J'] = {2};
    mp['R'] = {12, 18, 25};
    mp['T'] = {15, 20, 30};
    mp['M'] = {10, 15, 20};

    char boba, tea;
    int gram, sweet, cc;
    cin >> boba >> gram >> tea >> sweet >> cc;
    cout << 1LL*gram*mp[boba][0] + 1LL*cc*mp[tea][sweet-1] << '\n';
}