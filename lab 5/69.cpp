#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t, temp = "";
    cin >> s >> t;
    for(int i = 0; i < ceil(t.size()/s.size()); i++){
        temp += s;
    }
    if (temp == t){
        cout << "YES";
    } else {
        cout << "NO";
    }
}