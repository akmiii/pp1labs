#include <bits/stdc++.h>
using namespace std;
void toBin(int n){
    if (n == 0) return;
    toBin (n / 2);
    cout << n % 2;

}
int main(){
    int n;
    cin >> n;
    toBin(n);
}