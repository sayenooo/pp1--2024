#include <iostream>
using namespace std;
int main(){
string s;
cin >> s;
int countf = 0;
int countl = 0;
    for(char c:s){
        char first = '(';
        char last = ')';
        if(c==first){
            countf++;
        }else{
            countl++;
        }

    }
if(countf==countl){
    cout << "Yes";
}else{
    cout << "No";
}
    return 0;
}