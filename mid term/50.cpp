#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
getline(cin, s);
string t = "";
for(int i = 0; i < s.size(); i++){
    if(s[i] == ' ' or i == s.size()-1){
        if(s.size() - 1 == i) t += s[i];
        if(t.size() >= 3) cout << t << " ";
        t = "";
    }
    else {
        t += s[i];
    }
}
    
}