#include <iostream>
#include <set>
using namespace std;
int main(){
int n;
cin >> n;

string a;
set<string>s;
for(int i = 0; i<n; ++i){
    cin >> a;
    s.insert(a);
}
cout << s.size();


    return 0;
}
