#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<pair<pair<string, string>, int>, string> teams;

    while (n--) {
        string name1, name2;
        int score1, score2;
        cin >> name1 >> score1 >> name2 >> score2;

        // Sort names to ensure consistent key
        if (name1 > name2) swap(name1, name2);
        int totalScore = score1 + score2;

        // Create a unique key
        pair<pair<string, string>, int> key = {{name1, name2}, totalScore};
        string teamInfo = name1 + " and " + name2 + " " + to_string(totalScore);

        // Add to the map
        teams[key] = teamInfo;
    }

    // Output unique teams
    for (const auto &team : teams) {
        cout << team.second << endl;
    }

    return 0;
}
