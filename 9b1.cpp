#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x;
    string s;

    vector<int> v;
    vector<string> w;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s >> x;
        v.push_back(x);
        w.push_back(s);
    }

    sort(v.begin(), v.end());
    sort(w.begin(), w.end());

    for(int i = 0; i < v.size(); i++){
        cout << w[i] << ' ' << v[i] << endl;
    }

}
