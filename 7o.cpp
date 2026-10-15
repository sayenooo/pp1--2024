#include <iostream>
#include <set>
using namespace std;
int main(){
int n;
cin >> n;
int a[n];
set <int> aa;
for(int i = 0; i<n; ++i){
    cin >> a[i];  
}
int sumn = 0;
for(int i = 0; i<n-1; ++i){
    sumn=a[i]+a[i+1];
    aa.insert(sumn);
    
}
cout << aa.size();



    return 0;
}