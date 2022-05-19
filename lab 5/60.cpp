#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ok = true;
    int cnt = 1, checkpoint = 0;;
    sort(s.begin(), s.end()); //112233
    for(int i = 0; i < s.size(); i++){
        if (s[i] == s[i+1]){
            cnt++;
        } else {
            if (checkpoint == 0){
                checkpoint = cnt;
                cnt = 1;
            } else {
                if (checkpoint == cnt){
                    cnt = 1;
                } else { 
                    ok = false;
                    break;
                }
            }
        }
    }
    if (ok == true){
        cout <<"YES";
    } else {
        cout << "NO";
    }
}