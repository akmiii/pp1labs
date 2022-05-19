#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string res(string s){
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            if(s[i] >= 'a' and s[i] <= 'z'){
                s[i] = s[i] - 32;
            }
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << res(s);
}