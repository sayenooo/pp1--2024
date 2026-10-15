#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x;
    cin >> n;
    map<int,bool> mp;
    vector<int> v;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(mp[x] == 0){
            mp[x] = 1;
            v.push_back(x);
        }
    }

    do {
        for(int i : v) cout << i << ' ';
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));

}
