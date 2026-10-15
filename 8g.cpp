#include <iostream>
using namespace std;
int main(){
string s;
cin >> s;
for(int i = 0; i<s.size(); ++i){
    char remove = '1';
    if(s[i]==remove && s[i+1]==s[i]){
        s[i]=' ';
        s[i+1]=' ';
        i+=1;
    }
}
for(char c:s){
    if(c>='0' && c<='9'){
        cout << c;
    }
}
    return 0;
}



