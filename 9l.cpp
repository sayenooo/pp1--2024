#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int sumn = 0;
for(int i = 0; i<n; ++i){
    int x;
    cin >> x;
    bool a = true;
    if(x==1 || x==-1 || x==0) a = false;
    if(x>0){
        for(int j = 2; j<x; ++j){
            if(x%j==0){
                a = false;
                break;
            }
        }
    }
    if(x<0){
        for(int j = -2; j>x; --j){
            if(x%j==0){
                a = false;
                break;
            }
        }
    }
    if(a){
        sumn+=1;
    }
}

cout << sumn;

    return 0;
}