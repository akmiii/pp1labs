#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;
    //int arr[n][n];

    if (n % 2 == 0){
        for(int j = 1; j <= n; j++){
            for(int i = 1; i <= n; i++){
                if(i <= j) cout << "#";
                else cout << ".";
            }
            cout << endl;
        }
    }
    else {
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if (i + j >= n + 1) cout << "#";
                else cout << ".";
            }
            cout << endl;
        }
    }
}