#include <bits/stdc++.h>

using namespace std;

long long powl(long long n){

    long long res = n;

    if(n == 0) return 1;

    for(int i = 1; i < n; i++){
        res *= n;
    }
    return res;
}

int main() {

    int n;

    cin >> n;

    for(int i = 0; i <= n; i++){
        cout << powl(i) << ' ';
    }

}
