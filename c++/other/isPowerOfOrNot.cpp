// The given number is square or not.
#include<iostream>
using namespace std;

bool isPowerOf2(int n){
    return (n && !(n & (n-1)));
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOf2(n) << endl;
    return 0;
}