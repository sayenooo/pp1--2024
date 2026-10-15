#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    set <char> common_chars;
    string s;

    if (n > 0) {
        cin >> s;
        common_chars = set<char>(s.begin(), s.end());
    }

    for (int i = 1; i < n; ++i) {
        cin >> s;
        set<char> current_chars(s.begin(), s.end()), new_common;
        for (char c : common_chars)
            if (current_chars.count(c))
                new_common.insert(c);
        common_chars = new_common;
    }

    if (common_chars.empty()) cout << "NO COMMON CHARACTERS";
    else for (char c : common_chars) cout << c << ' ';
    cout << endl;

    return 0;
}
