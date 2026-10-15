#include <iostream>
#include <iomanip>
using namespace std;

double calculateGP(int totalPoints) {
    if (totalPoints < 50) {
        return 0.0;
    }
    int excessPoints = totalPoints - 50;
    return 1.0 + (excessPoints / 5) * (1.0 / 3.0);
}

int main() {
    int n;
    cin >> n;

    double totalCredits = 0;
    double weightedSum = 0;

    for (int i = 0; i < n; ++i) {
        int att1, att2, finalExam, credits;
        cin >> att1 >> att2 >> finalExam >> credits;

        int totalPoints = att1 + att2 + finalExam;
        double GP = 0.0;

        if (att1 + att2 >= 30 && finalExam >= 20) {
            GP = calculateGP(totalPoints);
        }

        weightedSum += GP * credits;
        totalCredits += credits;
    }

    double GPA = weightedSum / totalCredits;

    // Изменение точности вывода
    cout << fixed << setprecision(5) << GPA << endl;

    return 0;
}


