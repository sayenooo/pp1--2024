#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    queue<string> q;  // Queue to hold the names of boys
    for (int i = 0; i < n; i++) {
        int action;
        cin >> action;  // Read the action type
        if (action == 1) {
            string name;
            cin >> name;  // Read the boy's name
            q.push(name);  // Add the boy to the queue
        } else if (action == 2) {
            if (!q.empty()) {
                q.pop();  // Remove the first boy from the queue
            }
        }
        
        // After each operation, check the queue
        if (!q.empty()) {
            cout << q.front() << endl;  // Print the boy at the front of the queue
        } else {
            cout << "queue is empty" << endl;  // If the queue is empty
        }
    }

    return 0;
}
