#include <iostream>
#include <stack>
using namespace std;

string is_balanced(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main() {
    string s;
    cin >> s;

    cout << is_balanced(s) << endl;

    return 0;
}
