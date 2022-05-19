#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
        // with iterator
        // reather set<int>::iterator we can use !auto! 
        // for(set<int>::iterator i = s.begin(); i != s.end(); i++){
            // cout << *i << " ";
        // }

        // with for each
        // for(auto i : s){
            // cout << i << " ";
        // }
    
}