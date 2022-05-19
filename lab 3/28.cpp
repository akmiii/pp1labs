#include <iostream> 
#include <cmath>
using namespace std;
int main(){
    int n, tar;
    cin >> n >> tar;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    int idx = 0;
    bool met = false;
    bool found = false;
    
    for (int i = 0; i < n; i++){
        if (tar == a[i]){
            cout << i + 1;
            met = true;
            return 0;
        }
        if (tar < a[i] and found == false) {
            idx = i;
            found = true;
        }
    }
    if (met == false){
        if (found == false){
            cout << n;
        } 
        else cout << idx;
    }
}
