#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);  
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    stack<int> b;
    vector<int> bb;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0 && !b.empty()) { 
            bb.push_back(b.top());
            b.pop();
        }
        if (a[i] > 0) {
            b.push(a[i]);
        }
        
    }
if(!bb.empty()){
    for (int i : bb) {
        cout << i << " ";
    }
}else{
    cout << -1;
}

    return 0;
}
