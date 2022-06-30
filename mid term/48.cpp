#include <bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    //getline(cin, s);
    while(cin >> s){
        for(int j = 0; j < s.size(); j++){
            if(s[j] >= '0' and s[j] <= '9'){
                continue;
            }
            cout << s[j]; 
        }
        cout << endl;
    }    
}
