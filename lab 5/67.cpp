#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c;
    sort(s.begin(), s.end());
    cout << s[s.size() - 1];
}