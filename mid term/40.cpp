#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int arr[8][8];
    if (x < 0 or x > 7 or y < 0 or y > 7){
        cout << "Impossible";
        return 0;
    }
    else {
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                if (x == i and y == j) cout << 1 << " ";
                else if (x == i or (y == j and x < i) or (y == j and x > i)) cout << 2 << " ";
                else if ((abs(arr[x] - arr[i]) == abs(arr[y] - arr[j]))) cout << 2 << " ";
                else cout << "*" << " ";
            }
            cout << endl;
        }
    }
}