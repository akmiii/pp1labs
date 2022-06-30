#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    int t = arr[0];
    
    for (int i = 1; i < n; i++){
        t ^= arr[i];
    }
    bool ok = false;
    int cnt = 1;

    for (int i = 0; pow(2, i) <= t; i++){
        if(pow(2, i) == t){
            ok = true;
            break;
        }

    }
    if(ok) cout << "YES";
    else cout << "NO";
}