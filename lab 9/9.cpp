#include <bits/stdc++.h>
using namespace std;
bool ok = false;
int main(){
    int n;
    cin >> n;
    map<string, int> m;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(!m[s]) cout << "new user added" << endl; // m[s] == 0 <=> !m[s]
        else cout << "user already exists" << endl;
        m[s]++;
        
    }

}