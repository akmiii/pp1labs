#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t, temp1= "", temp2 = "";
    cin >> s;
    bool ok = false;
    t = s;
    reverse(s.begin(), s.end());
    for (int i = 1; i < t.size(); i++){
        temp1 += t[i];
    }
    for (int i = 0; i < s.size() - 1; i++){
        temp2 += s[i];
    }
    if (t == s){
        ok = true;
    }
    if (temp1 == temp2){
        ok = true;
    }
    if (ok){
        cout << "YES";
    } else {
        cout << "NO";
    }
}