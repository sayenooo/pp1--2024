#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i]=a[i];
    }
    rotate(a,a+m,a+n);
    for(int i = 0; i < n; i++) {
        b[i]=a[i];
    }
    reverse(b,b+n);
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    
    return 0;
}