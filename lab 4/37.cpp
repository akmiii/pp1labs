#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int mx = arr[0][0];
     for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mx = max(mx, arr[i][j]);
        }
    }
 // cout << mx;
     int scmax = arr[0][0];
      for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((scmax < arr[i][j]) and arr[i][j] < mx){
                scmax = arr[i][j];
            } 
            /*else if (arr[i][j] == arr[i+1][j+1]){
                scmax = 0;
            }
            */
        }
    }
    if (mx == scmax){
        cout << 0;
    } else {
    cout << scmax;    
    }
}
    
