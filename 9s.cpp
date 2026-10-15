#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    
    // Input elements into the vector
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    // Remove consecutive duplicates
    a.erase(unique(a.begin(), a.end()), a.end());
    
    // Output the result
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
