#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    
    // Read the prices
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    // Iterate over the array
    for (int i = 0; i < n; i++) {
        // Look for the next price that is less than or equal to prices[i]
        for (int j = i + 1; j < n; j++) {
            if (prices[j] <= prices[i]) {
                prices[i] -= prices[j];  // Apply the discount
                break;
            }
        }
    }
    
    // Print the final prices
    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    cout << endl;

    return 0;
}
