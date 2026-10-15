#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    vector<int>v;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
        v.push_back(a[i]);
    }
   int count1 = 0;
   for(int i = 0; i<n; ++i){
    for(int j = i; j<n; ++j){
        int xorr = a[i] ^ a[j];
        count1 += count(v.begin(),v.end(),xorr);
        }
    }
   

   cout << count1;

    return 0;
}