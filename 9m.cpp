#include <vector>
#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
vector<int>v;
for(int i = 1; i<=n; ++i){
    for(int j = 0; j<i; ++j){
        v.push_back(i);
    } 
}
for(int i = 0; i<v.size(); ++i){
    cout << v[i] << " ";
}

    return 0;
}