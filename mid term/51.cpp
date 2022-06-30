#include <bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin >> s;
    
    char c = s[0];
    int mx = 1;

    char temp = s[0];
    int cnt = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] != temp){
            if(cnt > mx){
                mx = cnt;
                c = temp;
            }
            temp = s[i];
            cnt = 1;
        }
        else {
            cnt++;
        }
    }
    if (cnt > mx){
        mx = cnt;
        c = temp;
    }
    cout << c << " " << mx;
}  