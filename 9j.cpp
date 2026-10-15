#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i]=a[i];
    }
    reverse(b,b+n);
    for(int i = 0; i < n; i++) {
        if(a[i]!=b[i]){
            cout << "Instead of " << a[i] << " here was " << b[i] << endl;
        }else{
            cout << "OK" << endl;
        }
    }
    return 0;
}
