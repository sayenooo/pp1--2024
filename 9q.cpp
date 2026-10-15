#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n), a;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        a.push_back(v[i]);
    }

    // Удаление дубликатов
    sort(a.begin(), a.end()); // Сортируем, чтобы правильно использовать unique
    a.erase(unique(a.begin(), a.end()), a.end());

    // Генерация всех перестановок
    do {
        for (int i = 0; i < a.size(); ++i) cout << a[i] << ' ';
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}

