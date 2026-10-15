#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;  // number of minutes
    cin >> n;

    vector<int> operations(n);
    for (int i = 0; i < n; ++i) {
        cin >> operations[i];
    }

    stack<int> candyStack;
    vector<int> soldCandies; 
    for (int i = 0; i < n; ++i) {
        if (operations[i] == 0) {
            if (!candyStack.empty()) {
                soldCandies.push_back(candyStack.top());
                candyStack.pop();
            }
        } else {
            candyStack.push(operations[i]);
        }
    }
    if (soldCandies.empty()) {
        cout << -1 << endl;
    } else {
        for (int candies : soldCandies) {
            cout << candies << " ";
        }
        cout << endl;
    }

    return 0;
}
