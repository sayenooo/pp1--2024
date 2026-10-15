#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> users;
    string user;

    for (int i = 0; i < n; ++i) {
        cin >> user;
        if (users.insert(user).second) {  // insert возвращает pair; .second == true, если вставка прошла успешно
            cout << "new user added" << endl;
        } else {
            cout << "user already exists" << endl;
        }
    }

    return 0;
}
