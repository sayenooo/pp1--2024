#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        string s = to_string(i);
        set<char> unique_chars(s.begin(), s.end());
        if (unique_chars.size() == s.size()) {
            cout << s << endl;  
            return 0;   
        }
    }

    cout << "Understandable, have a great day" << endl;
    return 0;
}
