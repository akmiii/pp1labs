#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    int n = 15;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++){
        if (s[i] == 'P' and t[i] == 'R') cnt1++;
        else if (s[i] == 'S' and t[i] == 'P') cnt1++;
        else if (s[i] == 'R' and t[i] == 'S') cnt1++;
        else if (s[i] == 'P' and t[i] == 'S') cnt2++;
        else if (s[i] == 'S' and t[i] == 'R') cnt2++;
        else if (s[i] == 'R' and t[i] == 'P') cnt2++; 
    }
    //cout << cnt1 << " " << cnt2 << endl;
    if (cnt1 > cnt2) cout << "First player wins!";
    else if (cnt1 < cnt2) cout << "Second player wins!";
    else cout << "Friendship";
}