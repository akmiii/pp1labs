#include <bits/stdc++.h>
using namespace std;

bool check (string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] >= '0' and s[i] <= '9'){
            cnt++;
        }
        else {
            cnt = 0;
        }
        if (cnt >= n){
            return true;
        }
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    if (check(s, n) == true) cout << "Valid";
    else cout << "Not valid";
}