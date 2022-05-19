#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'u' or s[i] == 'o'){
             cnt++;
        }
    }
    cout << cnt;
}