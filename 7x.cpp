#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    set<string> first_account, second_account, missing_subscriptions;
    
    // Read first account's subscriptions
    for (int i = 0; i < n1; ++i) {
        string sub;
        cin >> sub;
        first_account.insert(sub);
    }

    cin >> n2;

    // Read second account's subscriptions
    for (int i = 0; i < n2; ++i) {
        string sub;
        cin >> sub;
        second_account.insert(sub);
    }

    // Find missing subscriptions in both directions
    for (const string& sub : first_account) {
        if (!second_account.count(sub)) missing_subscriptions.insert(sub);
    }
    for (const string& sub : second_account) {
        if (!first_account.count(sub)) missing_subscriptions.insert(sub);
    }

    // Print missing subscriptions (set will be in sorted order)
    for (const string& sub : missing_subscriptions) {
        cout << sub << endl;
    }

    return 0;
}
