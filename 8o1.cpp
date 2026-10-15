#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int numberOfStudents;
    cin>>numberOfStudents;
    unordered_map<string, string> studentAuth;
    for(int i = 0; i < numberOfStudents; i++){
        string studentLogin, studentPassword;
        cin>>studentLogin>>studentPassword;
        studentAuth.insert({studentLogin, studentPassword});
    }
    int requests;
    cin>>requests;
    vector<string> responses;
    for(int i = 0; i < requests; i++){
        string login, password;
        cin>>login>>password;
        if(!studentAuth.count(login))
            responses.push_back("login error");
        else if(studentAuth.at(login) != password)
            responses.push_back("password error");
        else
            responses.push_back("correct password");
    }
    for(const auto& response : responses){
        cout<<response<<'\n';
    }
}
