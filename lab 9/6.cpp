#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; //(())
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push('(');
        }
        else if (s[i] == ')'){
            if(st.size() == 0){
                cout << "NO";
                return 0;
            }

            else if(st.top() == '(') st.pop(); //( 
               
            else {
                cout << "NO";
                return 0;
            }
        }
    } 
    if(st.size() == 0) cout << "YES";
    else cout << "NO";
}
