#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    set<string> st;
    map<string, bool> mp;
    string t = "";
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            mp[t];
            st.insert(t);
            //cout << t;
            t = "";
        }
        else {
            if(s[i] == '.' or s[i] == ',' or s[i] == ';') continue;
            else{
                t += s[i];
            }
        }

        if(s[i] == s.size()){
            mp[t];
            st.insert(t);
        }

         
    }
    //cout << st.size() << endl;
    
    map<string, bool> :: iterator a;
    for(a = mp.begin(); a != mp.end(); a++){
        if(!mp[a->first]){
            cnt++;
        }
    }
    cout << cnt << endl;
    for(a = mp.begin(); a != mp.end(); a++){
        if(!mp[t]) cout << a->first << " ";
    }

    // set<string> :: iterator it;
    // for(it = st.begin(); it != st.end(); it++){
    //     cout << (*it) << " ";
    // }
}