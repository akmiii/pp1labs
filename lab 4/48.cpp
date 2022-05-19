#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int i = 0, j = 0;
    int cnt = 1;
    while(cnt <= pow(n, 2)){
        while (j <= n - 1 - i){    // from left to right
            arr[i][j] = cnt;
            cnt++;
            j++;
        }
        i++;
        j--;
        while (i <= j){            // from up to down
            arr[i][j] = cnt;
            cnt++;
            i++;
        }
        i--;
        j--;
        while (j >= n - 1 - i){     // from right to left
            arr[i][j] = cnt;
            cnt++;
            j--;
        }
        j++;
        i--;
        while ( i > j){             // from down to up
            arr[i][j] = cnt;
            cnt++;
            i--;
        }
        i++;
        j++;
    }
    
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}