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
    int x = 0, y = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j){
                if (mx < arr[i][j]){
                    mx = arr[i][j];
                    x = i;
                    y = j;
                } 
            }
        }
    }
    cout << "Maximum element is: " << mx;
    cout << " with coordinates: " << ++x << ";" << ++y;
}