// Form the biggest number from numeric string
#include<iostream>
using namespace std;

int main()
{
    string s = "72494259";

    sort(s.begin(), s.end(), greater<int>());

    cout<<s<<endl;

    return 0;
}