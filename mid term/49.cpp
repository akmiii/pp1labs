#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    string t = "@gmail.com";
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.find(t) != -1){
            for(int j = 0; j < s.size() - t.size(); j++){
                cout << s[j];
            }
            cout << endl;
        }
    }
}