#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]) k*=2;
        else k--;
    }
    cout << k;
}