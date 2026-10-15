#include <iostream>
#include <map>
using namespace std;
int main(){
    int day;
    cin >> day;
    map<string,double>m;
    int total = 0;
    for(int d = 0; d<day; ++d){
        int n;
        cin >> n;
        for(int i = 0; i<n; ++i){
            string city;
            int count;
            cin >> city >> count;
            total+=count;
            m[city]+=count;
        }
    }
    for(map<string, double> :: iterator it = m.begin(); it != m.end(); ++it){
        it -> second = (it -> second)*100/ total;
        cout << it->first << " " << it->second;
        cout << endl;
    }
    return 0;
}