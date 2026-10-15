#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int q;  // Number of queries
    cin >> q;
    
    stack<pair<int, int>> stack;  // Stack to store (element, current_max)
    
    while (q--) {
        string query;
        cin >> query;
        
        if (query == "add") {
            int x;
            cin >> x;
            int current_max = stack.empty() ? x : max(x, stack.top().second);
            stack.push({x, current_max});
        } 
        else if (query == "delete" && !stack.empty()) {
            stack.pop();
        } 
        else if (query == "getcur") {
            if (!stack.empty()) cout << stack.top().first << endl;
            else cout << "error" << endl;
        } 
        else if (query == "getmax") {
            if (!stack.empty()) cout << stack.top().second << endl;
            else cout << "error" << endl;
        }
    }
    
    return 0;
}
