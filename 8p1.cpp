#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    stack<int> b;
    for(int i = 0; i<n; ++i){
        
        while(!b.empty() &&  b.top()<=a[i]){
            b.pop();
        }
        b.push(a[i]);
        cout << b.size() << " ";
    }

    return 0;
}
