#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cntB = 0, cntS = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' and s[i] <= 'Z'){
            cntB++;
        }
        if(s[i] >= 'a' and s[i] <= 'z'){
            cntS++;
        }
    }
    cout << cntS << " " << cntB;
}

