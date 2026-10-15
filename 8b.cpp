#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; ++i){
            cin >> a[i];
        }
vector <int> eve;
vector <int> odd;

    for(int i = 0; i<n; ++i){
        if(a[i]%2==0){
            eve.push_back(a[i]);
        }else{
            odd.push_back(a[i]);
        }
    }
sort(eve.begin(),eve.end());
sort(odd.begin(),odd.end());
vector <int> even;
for(int i = eve.size()-1; i>=0; --i){
    even.push_back(eve[i]);
}
even.insert(even.end(), odd.begin(), odd.end());
for(int i = 0; i<n; ++i){
    cout << even[i] << " ";
}


    return 0;
}