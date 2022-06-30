#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    char a;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    while(i < n){
        cin >> a;
        if (a == 'D') cnt1++;
        else if (a == 'O') cnt2++;
        else cnt3++;

        i++;
    }
    cout << "Orks: " << cnt2/3 << endl;
    cout << "Dragons: " << cnt1/3 << endl;
    cout << "Humans: " << cnt3/3;
}