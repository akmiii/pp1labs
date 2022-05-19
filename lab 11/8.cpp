#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 0 or n == 26){
        cout << s;
        return 0;
    }
    else{
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < n; j++){
                s[i]++;
                if(s[i] == '[') s[i] = 'A';
            }
        }
    }
    cout << s;
}