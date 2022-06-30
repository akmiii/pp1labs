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
    int temp;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                for(int c = j + 1; c < m; c++){
                    if(arr[i][j] > arr[i][c]){
                        temp = arr[i][c];
                        arr[i][c] = arr[i][j];
                        arr[i][j] = temp;
                    }
                }
            }
        }
        else {
            for(int j = 0; j < m; j++){
                for(int c = j + 1; c < m; c++){
                    if(arr[i][j] < arr[i][c]){
                        temp = arr[i][c];
                        arr[i][c] = arr[i][j];
                        arr[i][j] = temp;
                    }
                }
            }
        }

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}