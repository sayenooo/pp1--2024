#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>aa;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin >> a[i];
        aa.push_back(a[i]);
    }
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i<m; ++i){
        cin >> b[i];
        aa.push_back(b[i]);
    }
    sort(aa.begin(),aa.end());
    for(int i = 0; i<aa.size(); ++i){
        cout << aa[i] << " ";
    }

    return 0;
}
