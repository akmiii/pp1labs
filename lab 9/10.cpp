#include <bits/stdc++.h>
using namespace std;

int getSum(int sum, int k){
    sum += k;
    return sum;
}

int main(){
    vector<int> sum;
    int n;
    cin >> n;
    string s;
    int num;
    map<string, int> mp;
    map<string, int> :: iterator it;
    for(int  i = 0; i < n; i++){
        cin >> s >> num;

       //2nd method:  mp[s] +=num;

        if(mp.find(s) == mp.end()){
            mp[s] = num;
        }
        else mp[s] += num;
        
    }
    for(it = mp.begin(); it != mp.end(); it++){ // <=> auto
        cout << it -> first << " " << it -> second << endl;
    }
}