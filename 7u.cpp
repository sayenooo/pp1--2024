#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
    }
    int m;
    map <string,string> mymap;
    for (int i = 0; i < m; ++i) {
        string o1,o2;
        cin >> o1 >> o2;
        mymap[o1]=o2;
    }
    string need;
    cin >> need;
    for(const auto& pair:mymap){
        if(need==pair.first){
            cout << pair.first << " ";
        }else if(need==pair.second){
            cout << pair.second << " ";
        }else{
            cout << "0";
        }
    }

    
    return 0;
}
