#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m){
    int arr[n][m];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           cin >> arr[i][j];
       }
   }
   for(int j = 0; j < m; j++){
       for(int i = 0; i < n; i++){
           cout << arr[i][j] << " ";
       }
       cout << endl;
   }
}

int main(){
   int n, m;
   cin >> n >> m;
   solve(n, m);
}