#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char letter;
    int n, cnt = 0;
    cin >> letter >> n;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++){
        if (s[i] == letter){
            cnt++;
        }
    }
    if (cnt == n){
        cout << "YES";
    } else {
        cout << "NO";
    }
}