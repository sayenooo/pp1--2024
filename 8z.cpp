#include <stack>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string s1;
    cin >> s1;

    stack<char> ss;
    stack<char> ss1;
    string result = "";
    string result1 = "";

    for (char c:s) {
        if (c == '#' && !ss.empty()) { 
            ss.pop();
        }else{
            ss.push(c);
        }
    }

    for (char c1:s1) {
        if (c1 == '#' && !ss1.empty()) { 
            ss1.pop();
        }else{
            ss1.push(c1);
        }
    }

string sss = "";
while(!ss.empty()){
    sss+= ss.top() ;
    ss.pop();
}
string sss1 = "";
while(!ss1.empty()){
    sss1+= ss1.top() ;
    ss1.pop();
}

if(sss == sss1){
    cout << "True";
}else{
    cout << "False";
}
    return 0;
}