#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    queue<int>q;
    int count = 0;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
        q.push(a[i]);
        if(q.front()==m){
            count+=1;
        }
        q.pop();
    }
    
    cout << count;

 


    return 0;
}