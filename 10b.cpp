#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
vector< pair < int, int > > v;
    for (int i = 0; i<n; ++i) {
        int count = 0;
        for (int j = 0; j<n; ++j){
            if(a[i]==a[j]){
                count++;
            }
        }
        v.push_back(make_pair(count,a[i]));
    }
sort(v.begin(),v.end());
cout << v[v.size()-1].second;

    return 0;
}
