#include <bits/stdc++.h> 
using namespace std;
bool isSorted(int n, int arr[]){
    bool ok = true;
    for(int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                ok = false;
                break;
            }
        }
    }
    if (ok == false) return false;
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (isSorted(n, arr) == true) cout << "Sorted";
    else cout << "Not sorted";
}