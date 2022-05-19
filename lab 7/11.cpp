#include <bits/stdc++.h>
using namespace std;
int getMax(string s, int i, int maxi){
    if (i == s.size()) return maxi;
    
    maxi = max(maxi, s[i] - '0');
    return getMax(s, i+1, maxi);
}
int main(){
    string s;
    cin >> s;
    cout << getMax(s, 0, s[0] - '0');
}