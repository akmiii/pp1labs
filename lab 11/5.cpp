#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<char, int> mp;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        set<char> st;
        set<char> :: iterator it;
        for(int i = 0; i < s.size(); i++){
            st.insert(s[i]);
            
        }
        for(it = st.begin(); it != st.end(); it++){
            mp[*it]++;
        }
    }
    
    bool ok = false;
    for(auto i : mp){
        if(i.second >= n){
            ok = true;
            cout << i.first << " ";
        }
    }
    if(ok == false) cout << "NO COMMON CHARACTERS";
}