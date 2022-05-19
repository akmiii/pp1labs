#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t = "";
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(st.size() == 0){
            st.push(s[i]);
        }
        else if(st.top() == '1' and s[i] == '1'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    while(st.size() != 0){

        t += st.top(); 
        st.pop();
    }
    reverse(t.begin(), t.end());
    cout << t;

}