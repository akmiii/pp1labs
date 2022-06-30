#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    char c;
    cin >> c;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < t.size(); j++){
            if(s[i] == t[j]){
                s[i] = c;
            }
        }
    }
    cout << s;
}