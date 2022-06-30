#include <bits/stdc++.h> 
using namespace std;
int main(){
    string s, t = "";
    cin >> s;
    int a = s.size()+2;
    while(a){
        t += "+";
        a--;
    }
    cout << t << endl;
    cout << '+' << s << '+' << endl << t;
}