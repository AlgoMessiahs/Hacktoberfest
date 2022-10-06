#include<iostream>
using namespace std;

string reverse(string s){
    if(s.length() == 0){ //Base case
        return "";
    }
    char first = s[0];
    string ans = reverse(s.substr(1));
    if(first == ans[0]){
        return ans;
    } 
    return (first + ans);
}

int main()
{
    cout<<reverse("ababbbccdddeee")<<endl;
    return 0;
}