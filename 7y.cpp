#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int num_assistants, num_students, num_requests;
    cin >> num_assistants;
    
    unordered_map<string, string> student_to_assistant;

    // Read assistant names and their students
    while (num_assistants--) {
        string assistant;
        cin >> assistant >> num_students;
        while (num_students--) {
            string student;
            cin >> student;
            student_to_assistant[student] = assistant;
        }
    }

    // Process requests
    cin >> num_requests;
    while (num_requests--) {
        string student;
        cin >> student;
        cout << (student_to_assistant.count(student) ? student_to_assistant[student] : "F") << endl;
    }

    return 0;
}
