#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector< pair<int,string> > v;
    for(int i = 0; i<n; ++i){
       string name;
       int point;
       cin >> name >> point;
       v.push_back(make_pair(point,name));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; ++i){
        cout << v[i].second << " " << v[i].first;
        cout << endl;
    }
   

    return 0;
}