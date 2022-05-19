#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, string> mp;
    

    for(int i = 0; i < n; i++){
        string login, password;
        cin >> login >> password;
        mp[login] = password;
    }

    
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        bool log = false, pass = false;
        for(auto j : mp){
            if(a == j.first){
                log = true;

                if(j.second == b){
                    pass = true;
                }
            }           
        }

        if(log == true){
            if(pass){
                cout << "correct password" << endl;
            }
            else{
                cout << "password error" << endl;
            }
        }
        else {
            cout << "login error" << endl;
        }
    }
}