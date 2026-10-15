#include <bits/stdc++.h>

using namespace std;

int main() {

    string s, t;
    map<string, int> mp;
    set<int> st;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' ') t += s[i];
        else {
            mp[t]++;
            t = "";
        }
    }
    mp[t]++;

    for(auto& it : mp){
        st.insert(it.second);
    }

    for(set<int> :: reverse_iterator it = st.rbegin(); it != st.rend(); it++){
        for(auto& it2 : mp){
            if(it2.second == *it){
                cout << it2.first << " : " << *it << endl;
            }
        }
    }

}

