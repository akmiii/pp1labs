#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int sum[n];
    for (int i = 0; i < n; i++){
        long long summ = 0;
        for (int j = 0; j < m; j++){
            summ = summ + arr[i][j];
        }
        sum[n] = summ;
        cout << "The sum of row number " << i+1 << " is " << sum[n] << " " <<endl;
    }
    for (int j = 0; j < m; j++){
        long long summ = 0;
        for (int i = 0; i < n; i++){
            summ = summ + arr[i][j];
        }
        sum[n] = summ;
        cout << "The sum of column number " << j+1 << " is " << sum[n] << " " <<endl;
    }     
}