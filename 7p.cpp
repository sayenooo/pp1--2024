#include <iostream>
#include <vector>
using namespace std;

int main() { 
    int n;
    cin >> n;

    vector<pair<int, int> > a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    vector<int> b;
    for(int i = 0; i < n; ++i) {
        int sumn = a[i].first + a[i].second;
        b.push_back(sumn);
    }

    vector<int> c;
    for(int i = 0; i < n; ++i) {
        int found = 0;
        for(int j = 0; j < i; ++j) {
            if(b[i] == b[j]) {
                found += 1;
            }
        }
        c.push_back(found);
    }

    for(int i = 0; i < n; ++i) {
        cout << c[i] << endl;
    }

    return 0;
}





