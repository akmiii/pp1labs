#include <bits/stdc++.h>
using namespace std;
bool isPal(string s){ //jjoo
    string t = s;     //jjoo
    reverse(s.begin(), s.end());
    if(t == s) return true;
    return false;

}
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        if(isPal(s)){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }
    while (next_permutation(s.begin(), s.end()));
    cout << "JOJO";
    
}