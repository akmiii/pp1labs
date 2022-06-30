#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
   string s1 = "", s2 = "";

    while (a > 0){
        s1 += to_string(a % 2); 
        a /= 2;
    }
    while (b > 0){
        s2 += to_string(b % 2); 
        b /= 2;
    }
    while (s1.size() > s2.size()){
       s2 += '0';
    }
    while (s2.size() > s1.size()){
       s1 += '0';
    }
   reverse (s1.begin(), s1.end());
   reverse (s2.begin(), s2.end());
    //cout << s1 << " " << s2 << endl;
   
    int poww = 0, suma = 0, sumb = 0;
    char temp = s1[s1.size() - n - 1];
    s1[s1.size() - n - 1] = s2[s2.size() - n - 1];
    s2[s2.size() - n - 1] = temp;

    for (int i = s1.size() - 1; i >= 0; i--){
        suma += (s1[i] - '0') * pow(2, poww);
        poww++;
    }
    poww = 0;

    for (int i = s2.size() - 1; i >= 0; i--) {
        sumb += (s2[i] - 48) * pow(2, poww);
        poww++;
    }
    //cout << suma << " " << sumb << endl;
    
    if (suma > sumb) cout << "Good deal for the first number";
    else if (sumb > suma) cout << "Good deal for the second number";
    else cout << "Nothing has changed";

}
    
