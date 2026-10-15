#include <iostream>
#include <stack>
#include <string>
#include <set>

using namespace std;

int main() {
    string n;
    cin >> n;
    set<string> squares = {"16", "25", "36", "49", "64", "81"};
    stack<char> st;

    for (char c : n) {
        st.push(c);

        if (st.size() >= 2) {
            char second = st.top(); st.pop();
            char first = st.top(); st.pop();

            string lastTwo = string(1,first) + second;
            if (squares.find(lastTwo) == squares.end()) {
                st.push(first);
                st.push(second);
            }
        }
    }

    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        cout << result << endl;
    }

    return 0;
}