#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    string name = "";
    if (n == 0 or m == 0){
        cout << "error";
        return 0;
    }

    string s[n];
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        string student;
        cin >> student;
        s[i] = student;
        for(int j = 0; j < m; j++){
            int marks;
            cin >> marks;
            arr[i] += marks;
        }
        if(ans < arr[i]){
            ans = arr[i];
            name = student;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << s[i] << " - " << arr[i] << endl;
    }
    cout << "The best: " << endl;
    cout << name << " " << ans;
}