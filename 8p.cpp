#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    vector<int>b;
for(int i = 0; i < n; ++i) {
    cin >> a[i];
}
stack<int>s;
for(int i = 0; i < n; ++i) {
    s.push(a[i]);
    for(int j = 0; j<n; ++j){
        if(s.top()<=a[j]){
            s.pop();
        }
        s.push(a[i]);

    }
    cout << s.size() << " ";
}

    return 0;
}
