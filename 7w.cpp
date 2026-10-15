#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Step 1: Read input for bugs
    int num_bugs;
    cin >> num_bugs;
    
    vector<string> bug_names(num_bugs);
    vector<string> bug_weaknesses(num_bugs);
    
    for (int i = 0; i < num_bugs; ++i) {
        cin >> bug_names[i] >> bug_weaknesses[i];
    }
    
    // Step 2: Read input for hunters
    int num_hunters;
    cin >> num_hunters;
    
    vector<string> hunter_names(num_hunters);
    vector<string> hunter_abilities(num_hunters);
    vector<int> hunter_catch_limits(num_hunters);
    
    for (int i = 0; i < num_hunters; ++i) {
        cin >> hunter_names[i] >> hunter_abilities[i] >> hunter_catch_limits[i];
    }
    
    // Step 3: Process each hunter
    vector<bool> bug_caught(num_bugs, false); // Keep track of which bugs have been caught
    
    for (int i = 0; i < num_hunters; ++i) {
        string ability = hunter_abilities[i];
        int catch_limit = hunter_catch_limits[i];
        
        int caught_count = 0;
        
        // Try to catch bugs matching the hunter's ability
        for (int j = 0; j < num_bugs && caught_count < catch_limit; ++j) {
            if (!bug_caught[j] && bug_weaknesses[j] == ability) {
                bug_caught[j] = true; // Mark this bug as caught
                caught_count++;
            }
        }
    }
    
    // Step 4: Count remaining (uncaught) bugs
    int remaining_bugs = 0;
    for (int i = 0; i < num_bugs; ++i) {
        if (!bug_caught[i]) {
            remaining_bugs++;
        }
    }
    
    // Output the result
    cout << "Bugs left: " << remaining_bugs << endl;
    
    return 0;
}
