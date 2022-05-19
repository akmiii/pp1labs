#include <bits/stdc++.h>
using namespace std;

bool isSquare(char c, char b){
    int k;
    k = (c-'0')*10 + b-'0';
    int d = sqrt(k);
    if(k == (d * d)) return true;
    return false;
}
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(!st.empty()){
            char a = st.top();
            if(isSquare(a, s[i]) == true){
            st.pop();
            }
            else st.push(s[i]);
        }    
        else{
            st.push(s[i]);
        }
    }

    if(st.empty()){
        cout << "Stack is empty";
        return 0;
    }
    else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
}
