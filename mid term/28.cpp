#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    string s = to_string(n);
    string t = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            t += s[i];
        }
        
    }
    for(int i = 0; i < s.size(); i++){
        s.erase(remove(s.begin(), s.end(), '1'), s.end());
    }

    // for(int i = 0; i < s.size(); i++){
    //     for(int j = 0; j < s.size()-1-i; j++){
    //         if(s[j] == '1'){
    //             swap(s[j], s[j+1]);
    //         }
    //     }
    // }
    cout << t << s;
}