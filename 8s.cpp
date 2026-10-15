#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;  // number of queries
    cin >> n;
    
    deque<int> arr;  // Using deque to allow efficient insertion at both ends
    bool isReversed = false;  // Flag to track if the array is reversed
    
    for (int i = 0; i < n; i++) {
        int type;  // query type
        cin >> type;
        
        if (type == 1) {
            int x;  // the element to add
            cin >> x;
            if (isReversed) {
                arr.push_front(x);  // Insert at the front if reversed
            } else {
                arr.push_back(x);   // Insert at the back otherwise
            }
        } else if (type == 2) {
            isReversed = !isReversed;  // Toggle the reversed flag
        }
    }
    
    // Output the final array
    if (isReversed) {
        for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
            cout << *it << " ";
        }
    } else {
        for (auto it = arr.begin(); it != arr.end(); ++it) {
            cout << *it << " ";
        }
    }
    cout << endl;
    
    return 0;
}
