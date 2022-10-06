#include<iostream>
using namespace std;

string moveAllX(string s){
    if(s.length() == 0){
        return "";
    }

    char first = s[0];
    string ans = moveAllX(s.substr(1));

    if(first == 'x'){
        return ans + first;
    } 
    return first + ans;
}

int main()
{
    cout<<moveAllX("abhixxmnxxyxxu")<<endl;
    return 0;
}