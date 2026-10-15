#include <iostream>
#include <bitset>
#include <string>

using namespace std;
string toBinary(int num) {
    if (num == 0) return "0"; 
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2; 
    }
    return binary;
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        cout << toBinary(x) << endl;
    }

    return 0;
}
