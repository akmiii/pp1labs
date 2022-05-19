#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    multimap<pair<string, string>, int > mp1;
    int x, y;
    for(int i = 0; i < n; i++){
        string s, t;
        cin >> s >> x;
        cin >> t >> y;
        mp1.insert(make_pair(make_pair(s, t), x+y));  
    }
    for(auto i : mp1){
        if(x == y){
            cout << i.first.first << " and " << i.first.second << " " << i.second << endl;
            break;
        }
        cout << i.first.first << " and " << i.first.second << " " << i.second << endl;  
    }
    
    
}