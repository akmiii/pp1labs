#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long sum1 = 0, sum2 = 0;
    for(int i = 0; i < s.size(); i++){
        if (i % 2 == 0){
            sum1 += s[i] - '0';
        } else {
            sum2 += s[i] - '0';
        }
    }
    if (sum1 == sum2){
        cout << "YES";
    } else {
        cout << "NO";
    }
}