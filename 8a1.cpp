#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int> >p;
    for(int i = 0; i<n; ++i){
        int x,y;
        cin >> x >> y;
        p.push_back(make_pair(x,y));
    }
sort(p.begin(), p.end());
for(int i = 0; i<n; ++i){
    cout << p[i].first << " " << p[i].second;
    cout << endl;
}
}
