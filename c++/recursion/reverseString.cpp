#include<iostream>
using namespace std;

void revers(string s){
    if(s.length() == 0){ //Base case
        return;
    }

    string ros = s.substr(1);
    revers(ros);
    cout<<s[0];
}

int main()
{
    revers("Abhimanyu");
    cout<<endl;
    return 0;
}