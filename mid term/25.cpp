#include <bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ok = false;
    string t = "";
    t = s;

    reverse(s.begin(),s.end());
    //cout << t << " " << s;
    if (t == s) cout << "YES";
    else cout << "NO";
}