#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a,n,m;
int aa[a];
cin >> a >> n >> m;
for(int i = 0; i<a; ++i){
    cin >> aa[a];
}
for(int i = 0; i<n-1; ++i){
    cout << aa[i] << " ";
}
for(int i = n-1; i<m-1; ++i){
    cout << aa[i] << " ";
}
for(int i = m-1; i<a; ++i){
    cout << aa[i] << " ";
}
    return 0;
}