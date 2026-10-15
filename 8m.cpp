#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string>d;
    for(int i = 0; i<n; ++i){
        int a;
        string s;
        cin >> a >> s;
        if (a==1 && !s.empty()){
            d.push(s);
        }else if(a==2 && !s.empty()){
            d.push(s);
        }
    }
    
    if(!d.empty()){
        cout << d.front() << endl;
        d.pop();
    }else{
        cout << "queue is empty";
    }

    return 0;
}