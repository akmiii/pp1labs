#include <bits/stdc++.h> 
using namespace std;
// void getRes(double n){
//     if(n == 0)
//         cout << "YES";
//     else if (n == false and n != 0) cout  << "NO";
//     else cout << "YES";
// }
// double logbase(double a){
//     return log(a)/log(2);
// }


int main(){
    double a, b, n;
    cin >> a >> b;
    double x = b/a;
    for(int i = -60; i <= 60; i++){            //640 10 >> i = 0; i <= 1/64
        if(pow(2, i) == x){
            cout << "YES" << " " << i;
            return 0;
        }
    } 
    cout << "NO";

}