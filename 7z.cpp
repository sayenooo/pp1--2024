#include <iostream>
#include <map>
#include <iomanip> 
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; 

    map<string, double> studentScores; 

    map<string, int> studentCounts; 


    for (int i = 0; i < n; ++i) {
        string name;
        double score;
        cin >> name >> score; 

        studentScores[name] += score; 
        studentCounts[name] += 1;     
    }

    for (auto& entry : studentScores) {
        string name = entry.first; 
        double totalScore = entry.second; 
        double average = totalScore / studentCounts[name]; 
        cout << name << ": " << fixed << setprecision(3) << average << endl; 
    }

    return 0;
}
