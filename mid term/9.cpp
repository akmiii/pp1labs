#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    //int k = 1, bit = 0;
    string s = "";
    while (n){
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
   
    int cnt1 = 0, cnt0 = 0;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '1'){
            cnt1++;
        }
        else cnt0++;
    }
    
    cout << "zeros" << " " << cnt0 << endl;
    cout << "number of units" << " " << cnt1;

}