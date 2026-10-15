#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,int> users;
    for (int i = 0; i < n; ++i) {
        string dorama;
        int epi;
        cin >> dorama >> epi;
        users[dorama]+=epi;
    }
    for(const auto& u:users){
        cout << u.first << " " << u.second;
    }

    return 0;
}
