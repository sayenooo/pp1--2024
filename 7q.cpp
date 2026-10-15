#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() { 
    int n;
    cin >> n;

    map<string, int> scores; 
    int total = 0;
    for (int i = 0; i < n; ++i) {
        string name;
        int score;
        cin >> name >> score;
        total += score;
        scores[name] += (score*100)/total;
    }

    for (const auto& entry :scores) {
        cout << entry.first << " " << entry.second << "%" << endl;
    }



    return 0;
}
