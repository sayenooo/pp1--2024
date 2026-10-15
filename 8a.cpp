#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector < vector < int > > a (n , vector <int> (2));
    for(int i = 0; i<n; ++i){
        for(int j = 0; j <2; ++j){
            cin >> a[i][j];
        }
    }
sort(a.begin(), a.end());            
    for(int i = 0; i<n; ++i){
        for(int j = 0; j <2; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}