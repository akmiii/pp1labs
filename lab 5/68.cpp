#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
   
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'z') {
            s[i] = 'a';
        } 
        else if (s[i] == 'a') {
            s[i] = 'b';
        }     
        else {
            s[i] = s[i] + 1;
        }
    }
    cout << s;
}