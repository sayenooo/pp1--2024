#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool aa(const string& str){
bool lower = false;
bool upper = false;
bool number = false;
        for(char c:str){
            if(islower(c)){
                lower = true;
            }else if(isupper(c)){
                upper =  true;
            }else if(isdigit(c)){
                number = true;
            }
            if(lower && upper && number){
            return true;
            }
        }
    return false;
}

int main(){
    int n;
    cin >> n;
    string str;
    set<string>s;
   
    for(int i = 0; i<n; ++i){
        cin >> str;
        if(aa(str)){
          s.insert(str);  
        }
    }
    cout << s.size();
    cout << endl;
    for(const string& str : s){
        cout << str << endl;
    }

    
    


    return 0;
}




