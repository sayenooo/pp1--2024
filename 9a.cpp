#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
    string s;
    vector<string>ss;
    map<string,int>m;
    while(cin >> s){
        ss.push_back(s);
    }
    
    for(int i = 0; i<ss.size(); ++i){
        int count = 0;
        for(int j = 0; j<ss.size(); ++j){
            if(ss[i]==ss[j])
            count+=1;
        }
        m[ss[i]]=count;
    }
    for(map<string, int> :: iterator it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << ":" << " " << it->second;
        cout << endl;
    }
   

    return 0;
}