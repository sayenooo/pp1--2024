#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        int d = (x - a) * (x - a) + (y - b) * (y - b); // Сохраняем квадрат расстояния
        v.push_back({d, {a, b}});
    }

    sort(v.begin(), v.end()); // Сортируем по возрастанию расстояний

    for (const auto& p : v) {
        cout << p.second.first << " " << p.second.second << endl; // Вывод координат
    }

    return 0;
}
