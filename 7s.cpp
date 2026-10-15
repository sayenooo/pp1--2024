#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,set<int> >practice;
    for(int i = 0; i<n; ++i){
        string name;
        int day;
        cin >> name >> day;
        practice[name].insert(day);
    }
    for(const auto& [name, day]:practice){
            if(day.size()<3){
                cout << name << " NO BONUS" << endl;

            }else{
                cout << name << " +1" << endl;
            }
        }


    return 0;
}