#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b){
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < a.size(); i++){
        sum1 += a[i];
    }
    for(int j = 0; j < b.size(); j++){
        sum2 += b[j];
    }

    if(sum1 != sum2) return sum1 < sum2;

    if(a.size() != b.size()) return a.size() < b.size();

    return a < b;
}

int main(){
    vector<vector<int> > v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> row;
        int x;
        cin >> x;
        for(int j = 0; j < x; j++){
            int num;
            cin >> num;
            row.push_back(num);
        }

        v.push_back(row);

    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j]<< " ";
        }
        cout << endl;
    }

}