#include <bits/stdc++.h>
using namespace std;
 bool find(string s, int n){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] >= '0' and s[i] <='9'){
            cnt++;
        }
    }
    if(cnt >= n) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    if(find (s, n) == true) cout << "YES";
    else cout << "NO";
}