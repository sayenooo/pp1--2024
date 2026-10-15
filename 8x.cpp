#include <stack>
#include <vector>
#include <iostream>
#include <map>
using namespace std;
int primes(int n){
int index = 1;
map<int,int>m;
vector<int>prime;
for(int i = 2; i<=1000; ++i){
    bool bb = true;
    for(int j = 2; j<=i; ++j){
        if(i%j==0 && i!=j){
            bb = false;
            break;
        }
    }
    if(bb){
    for(int i1= 2; i1<=1000; ++i1){
    bool bb1 = true;
    for(int j1 = 2; j1<=i1; ++j1){
        if(i1%j1==0 && i1!=j1){
            bb1 = false;
            break;
        }
    }
    if(bb1){
        m[index]=i1;
        index++;
    }
    }
    }
}


return m[n];

}


int main() {
int n;
cin >> n;

cout << primes(n);

return 0;
}