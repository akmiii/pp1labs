#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        if (s.find(t) == string::npos){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}