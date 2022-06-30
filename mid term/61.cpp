#include <bits/stdc++.h> 
using namespace std;
double GetPriceQualityRatio(int p, int q){
    // int mn = INT_MAX;
    // string s;
    // for(int i = 0; i < n; i++){
    //     if (mn > i){
    //         cout << s;
    //     }
    // }
    return p/q;
}
int main(){
    int n;
    cin >> n;
    string s;
    int arr[n];
    int p, q;
    int mn = INT_MAX;

    for(int i = 0; i < n; i++){
        cin >> s >> p >> q;
        if (GetPriceQualityRatio(p, q) < mn){
            mn = GetPriceQualityRatio(p, q);
        }
    }

    cout << mn;
    
}