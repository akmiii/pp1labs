#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[8];
    string s = "";
    for (int i = 0; i < 8; i++){
        s += (n % 2) + '0';
        n /= 2;
    }
    string t = s;
    reverse (t.begin(), t.end());
    if (s == t) cout << "It works!";
    else cout << "Sad";
}