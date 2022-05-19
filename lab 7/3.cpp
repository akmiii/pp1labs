#include <bits/stdc++.h>
using namespace std;

bool getRes(int n, int arr[], int x, int i){
    if (arr[i] == x) return true;
    if (i == n) return false;
    getRes(n, arr, x, ++i);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    if (getRes(n, arr, x, 0)) cout << "Yes";
    else cout << "No";
}