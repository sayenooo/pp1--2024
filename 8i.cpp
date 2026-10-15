#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    string result;
    cout << endl;
    for(int i = 0; i<=n; ++i){
        bool result = true;
        for(int j = 0; j<i; ++j){
            if(a[j]==a[i]){
                result = false;
            }
        }
        if(result){
            cout << "new user added" << endl;
        }else{
            cout << "user already exists" << endl;
        }
    }

    return 0;
}