#include <bits/stdc++.h> 
using namespace std;
// void solve (int a, int b){
//     bool ok = false;
//     for(int i = a; i <= b; i++){
//         int num = i;
//         if (num % 10 == 5)
//             cout << i << " ";
        
//         num /= 10;
//     }
// }
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        string s = to_string(i);
        for(int j = 0; j < s.size(); j++){
            if (s[j] == '5'){
                cout << s << " ";
                break;
            }
        }
    }
    
    // while(a <= b){
    // for (int i = a; i <= b; i++){
    //     int num = i;
    //     while (num){
    //         if (num % 10 == 5) cout << i << " ";
    //         num /= 10;
    //     }
    // }
}