#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
    if (n == 2) return true;  // 2 is a prime number
    if (n % 2 == 0) return false; // Even numbers greater than 2 are not prime
    
    // Check divisibility from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    if (is_prime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
