#include <bits/stdc++.h> 
using namespace std;
int main(){
    int a, n, b, k;
    cin >> a >> n >> b >> k;
    string s1 = "", s2 = ""; 
    for (int i = 0; i < 8; i++){
        s1 += a % 2 + '0';
        a /= 2;
        }
    
    //cout << s1;

    for (int i = 0; i < 8; i++){
        s2 += b % 2 + '0';
        b /= 2;
    }
    
    //cout << " " << s2;
    bool ok = false;
    for (int i = 0; i < s1.size(); i++){
        for(int j = 0; j < s2.size(); j++){
            if (i == n and j == k){
                if (s1[i] == s2[j]) {
                    ok = true;
                    break;
                }
                //cout << s1[i] << " " << s2[j];
            }
        }
    }
    if(ok == true) cout << "Thunderclap and Flash!";
    else cout << "Thunder Breathing... First form...";
}

   
    
