#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string res = "";
    while(n >= 1000){
        res += 'M';
        n -= 1000;
    }
    if(n >= 900){
        res += "CM";
        n -= 900;
    }
    if(n >= 500){
        res += "D";
        n -= 500;
    }
    if(n >= 400){
        res += "CD";
        n-=400;
    }
    while(n >= 100){
        res += 'C';
        n -= 100;
    }
    if(n >= 90){
        res += "XC";
        n -= 90;
    }
    if(n >= 50){
        res += "L";
        n -= 50;
    }
    if(n >= 40){
        res += "XL";
        n -= 40;
    }
    while(n >= 10){
        res += "X";
        n -= 10;
    }
    if(n >= 9){
        res += "IX";
        n -= 9;
    }
    if(n >= 5){
        res += 'V';
        n -= 5;
    }
    if(n >= 4){
        res += "IV";
        n -= 4;
    }
    while(n >= 1){
        res += "I";
        n--;
    }
    cout << res;
}