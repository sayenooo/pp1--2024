#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair<int,int> a[n];
    for(int i = 0; i<n; ++i){
        int x,y;
        cin >> x >> y;
        int index = i+1;
        int z = x+y;
        a[i] =make_pair(z,index);
    }
    
    sort(a,a+n);
    for(int i = 0; i<n; ++i){
        cout << a[i].second << " ";
    }

    return 0;
}