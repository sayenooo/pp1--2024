#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    string a = "ZA WARUDO TOKI WO TOMARE";
    for(int i = 0; i<s.length(); ++i){
        int count = 0;

        if(s.length()%2==0){
            for(int j = 0; j<s.length(); ++j ){
                if(s[i]==s[j]){
                count += 1;
                }
                if(count%2!=0){
                    a = "JOJO";
                }
            }
        }
vector<int>v;
        if(s.length()%2!=0){
            for(int j = 0; j<s.length(); ++j ){
                if(s[i]==s[j]){
                count += 1;
                }
                v.push_back(count);
            }
        }
for(int c; c<v.size(); ++c){
    int count = 0;
    if(v[c]%2==0){
        count +=1 ;
    }
    if(count==0){
        a = "JOJO";
    }
}
    }

cout << a;

    return 0;
}