#include <bits/stdc++.h>
using namespace std;

int getDiff(int a, int b){
    return abs(a - b);
}

int main(){
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++){ 
        cout << getDiff(arr1[i], arr2[i]) << " ";
    }
}