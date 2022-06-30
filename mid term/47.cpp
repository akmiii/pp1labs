#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;
    string t = "";
    string s;
    int cnt = 0;
    string ispal;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            t += s[j];
        }
        reverse(s.begin(), s.end());
        if (t == s){
            cnt++;
            ispal += s;
             ispal += '\n';
        }
        
        t = "";
        //cout << ispal << " ";
    }
    if (cnt > 0) cout << ispal;
    if (cnt == 0) cout << "NO";
    
}
