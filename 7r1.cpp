#include <iostream>
#include <set>
#include <string>
using namespace std;
bool xoxo(set <string> common_chars, set <char> chars){
    set <char> result;
    for(char c: chars) {
        bool ischaar = true;
        for(const string& word: common_chars){
            if(word.find(c)==string::npos){
                ischaar = false;
                break;
            }
        }
        if(ischaar){
            return true;
        }
    }
    return false;
}




int main() {
    int n;
    cin >> n;
    set <string> common_chars;
    set <char> chars;

    string s;

    for(int i = 0; i<n; ++i) {
        cin >> s;
        common_chars.insert(s);
    }
    for(string word:common_chars) {
        for(char c: word){
            chars.insert(c);
        }
    }

    set <char> result;
    for(char c: chars) {
        bool ischaar = true;
        for(const string& word: common_chars){
            if(word.find(c)==string::npos){
                ischaar = false;
                break;
            }
        }
        if(ischaar){
            result.insert(c);
        }
    }

if(xoxo(common_chars, chars)){
    for(char r:result){
        cout << r << " ";
    }
}else{
    cout << "NO COMMON CHARACTERS";
}


    return 0;
}
