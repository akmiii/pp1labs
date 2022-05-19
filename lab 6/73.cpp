#include <bits/stdc++.h>
using namespace std;
bool find(int n, int arr[], int x){
    for(int i = 0; i < n; i++){
        if(x == arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    if (find(n, arr, x) == true) cout << "YES";
    else cout << "NO";
}
