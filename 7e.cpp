#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    vector<int>c;

    for(int i = 0; i<n; ++i){
        cout << '+';
        cin >> a;
        c.push_back(a);
    }
    
    int result = 0;
    sort(c.begin(),c.end());
    for(int i = 0; i<n; ++i){
        if(c[i]==c[i+1]&& c[i+1]==c[i+2]){
            result+=1;
            i+=2;
        }
    }
    cout << result;
    
    return 0;
}