#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin >> n;
string a[n];
for(int i = 0; i<n; ++i){
    cin >> a[i];
}
map<string,int>aa;

for(int i = 0; i<n; ++i){
    aa[a[i]]=i+1;
}

for(const auto& it:aa ){
    cout << it.first << " " << it.second << endl;
}
    return 0;
}