#include <bits/stdc++.h>
using namespace std;

int counter (string s, int i, int cnt){
    if (i == s.size()) 
        return cnt;

    if (s[i] % 2 == 0)
        cnt++;
    return counter (s, ++i, cnt);
}

int main(){
    string s;
    cin >> s;
    cout << counter(s, 0, 0);
}