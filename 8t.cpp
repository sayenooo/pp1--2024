#include <iostream> 
#include <algorithm> 
#include <map> 
#include <stack>
#include <queue> 
#include <utility> 
#include <set> 
#include <vector> 
#include <queue>
using namespace std;
string DecToBin(long long number){
    string binaryRepresentation = "";
    while(number != 0){
        binaryRepresentation = ((number % 2 == 0) ? '0' : '1') + binaryRepresentation;
        number /= 2;
    }
    return binaryRepresentation;
}
int main() { 
    int amountOfNumbers;
    cin >> amountOfNumbers;
    vector<string> isGood;
    for(int i = 0; i < amountOfNumbers; i++)
    {
        long long number;
        cin >> number;
        string binaryNum = DecToBin(number);
        for(int j = 0; !binaryNum.empty() && j < binaryNum.length() - 1;){
            
            if((binaryNum[j] == '1' && binaryNum[j + 1] == '0')){
                binaryNum.erase(j, 2);
                j = 0;
                }
            else
                j++;
        }
        
        if(binaryNum.empty())
            isGood.push_back("YES");
        else
            isGood.push_back("NO");

    }
    for(auto i : isGood)
        cout<<i<<'\n';
    
}
