#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> m;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(!m[s]){
            m[s] = i;
        }
    }
    
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

}