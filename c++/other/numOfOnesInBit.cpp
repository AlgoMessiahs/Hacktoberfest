#include<iostream>
using namespace std;

int numberOfOnes(int n){
    int count = 0;
    while(n){
        count++;
        n = n & (n-1);
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<numberOfOnes(n)<<endl;
    return 0;
}