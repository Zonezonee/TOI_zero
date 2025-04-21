#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, string> mp = {{'D', "diamonds"}, {'H', "hearts"}, {'S', "spades"}, {'C', "clubs"}};
    map<char, string> mp1 = {{'A', "ace"}, {'J', "jack"}, {'Q', "queen"}, {'K', "king"}};
    string kind = mp[toupper(s.back())];
    s.pop_back();
    if(toupper(s[0]) >= 'A' && toupper(s[0]) <= 'Z') cout << mp1[s[0]] << ' ';
    else cout << s << ' ';
    cout << "of " + kind << '\n';
}