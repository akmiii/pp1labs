#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    string s = "";
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++){
        //arr[i] = [i];
        cout << (char)arr[i] << " ";
    }
}