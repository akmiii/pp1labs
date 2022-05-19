#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    int l, r, lenght;
    cin >> s >> l >> r;
    
    lenght = r - l + 1;
    t = s.substr(l, lenght);

    cout << t;
}