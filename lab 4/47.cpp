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
    int sum = 0;
    int x = 0, y = 0;
    cout << "coordinates of min elements:" << endl;
    for (int j = 0; j < m; j++){
        int mn = 1000;
        for (int i = 0; i < n; i++){
            if (mn > arr[i][j]){
                mn = arr[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
       sum += mn;
       cout << x << ";" << y << endl;
    }
    cout << "Their sum: " << endl;
    cout << sum;
}