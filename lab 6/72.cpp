#include <bits/stdc++.h>
using namespace std;

bool met (bool was[], int j){
    return was[j];
}

int cnt(int arr1[], int arr2[], int n, bool was[]){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (arr1[i] == arr2[j]){
                if(met(was, j)){
                    was[j] = 0;
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
void solve(){
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    bool was[n];
    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < n; i++) cin >> arr2[i];
    for(int i = 0; i < n; i++) was[i] = true;
    cout << cnt(arr1, arr2, n, was);
}

int main(){
    solve();
}