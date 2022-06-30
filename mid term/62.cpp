#include <bits/stdc++.h> 
using namespace std;
int titleToNumber (string s, long long res){
    res += (s[0] - 'A') + 1;
    for(int i = 1; i < s.size(); i++){
    res *= 26;
    res = res + (s[i] - 'A') + 1;
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    long long res = 0;
    cout << titleToNumber (s, res);
}