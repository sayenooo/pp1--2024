#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin , s);
    vector<char>v;
    for(char c:s){
        if(c!='s'){
            v.push_back(c);
        }
    }
    deque<char>d;
    deque<char>d1;
    for(char c: v){
        d.push_front(c);
        d1.push_back(c);
    }
    string result = "";
    string result1 = "";
    while(!d.empty()){
        result+=d.front();
        d.pop_front();
    }
    while(!d1.empty()){
        result1+=d1.front();
        d1.pop_front();
    }
    if(result == result1 && result.length()%2==0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
