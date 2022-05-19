#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] < 0){
                cnt++;
            }
        }
    }
    cout << cnt;
}