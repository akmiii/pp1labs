#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int mx = 0;
    int sum[n] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i] += arr[i][j];
        }
        // cout << sum[i] << " ";
        mx = max(mx, sum[i]);
    }
    cout << mx;
    

}