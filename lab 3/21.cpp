#include <iostream> 
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int a[i];
        cin >> a[i];
        if (a[i] > 0) cnt++;
    }
    cout << cnt;
}