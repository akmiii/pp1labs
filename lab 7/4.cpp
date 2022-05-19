#include <bits/stdc++.h>
using namespace std;
int getSum(string s, int i, int sum){
    if (i == s.size()) return sum;
    sum += s[i] - '0';
    return getSum(s, i+1, sum); //123
}
int main(){
    string s;
    cin >> s;
    cout << getSum(s, 0, 0);
}