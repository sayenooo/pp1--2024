#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector< pair <int, vector<int> > >vv;
    for(int i = 0; i<n; ++i){
        int m;
        cin >> m;
        int a[n][m];
        int count = 0;
        vector<int>v;
        for(int j = 0; j<m; ++j){
            cin >> a[i][j];
            count += a[i][j];
            v.push_back(a[i][j]);
        }
        vv.push_back(make_pair(count, v));
    }
   
    sort(vv.begin(),vv.end());
    for(auto& it: vv){
        for(int it1: it.second){
            cout << it1 << " ";
        }
        cout << endl;
    }


    return 0;
}