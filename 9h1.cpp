#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector< pair <string,int> > p;
    for(int i = 0; i<n; ++i){
        string s1,s2;
        int p1,p2;
        cin >> s1 >> p1 >> s2 >> p2;
        int point = p1+p2;
        p.push_back(make_pair(s1 + " and " + s2,point));
    }
    map<string,int>m;
    for(vector< pair <string,int> > :: iterator it = p.begin(); it!=p.end(); ++it){
        m[it->first]=it->second;
    }
    for(map <string,int> :: iterator it = m.begin(); it!=m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}