#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k = 0; 
    cin >> k;
    int mn = 10000000;
    for(int i = 0; i < n; i++){
        if(abs(k - arr[i]) < mn){
            mn = abs(k - arr[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if(mn == abs(k - arr[i])){
            cout << i;
            return 0;
        }
    }
    //cout << mn;
}