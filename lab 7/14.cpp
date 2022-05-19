#include <bits/stdc++.h>
using namespace std;
bool getRes(int n, int k, int arr[]){
    if(n == 1) return true;

    if(arr[n] - arr[n-1] < k) return false;
    return getRes(n-1, k, arr);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    int k; cin >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    //sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            }
        }
        
    }
    //for(int i = 0; i < n; i++) cout << arr[i] << " ";
    if(getRes(n, k, arr)) cout << "no";
    else cout << "cheater";
}
