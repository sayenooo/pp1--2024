#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> login_password_map;
    
    // Reading the login-password pairs for the students
    for (int i = 0; i < n; ++i) {
        string login, password;
        cin >> login >> password;
        login_password_map[login] = password;  // Store login and password
    }

    // Processing the requests
    for (int i = 0; i < m; ++i) {
        string login, password;
        cin >> login >> password;
        
        if (login_password_map.find(login) == login_password_map.end()) {
            // Login does not exist
            cout << "login error" << endl;
        } else if (login_password_map[login] != password) {
            cout << "password error" << endl;
        } else {
            cout << "correct password" << endl;
        }
    }
    
    return 0;
}
