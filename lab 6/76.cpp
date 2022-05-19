#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'a' or s[i] == 'A' or s[i] == 'i' or s[i] == 'I' or s[i] == 'u' or s[i] == 'U' or s[i] == 'e' or s[i] == 'E' or s[i] == 'o' or s[i] == 'O'){
            continue;
        }
        else{
            cout << s[i];
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    solve(s);
}