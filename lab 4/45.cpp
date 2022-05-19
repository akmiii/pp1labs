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
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ((i + j) % 2 == 0){
                arr[i][j] = arr[i][j] + 1;
            }
            if ((i + j) % 2 == 1){
                arr[i][j] = arr[i][j] - 1;
            }
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
}