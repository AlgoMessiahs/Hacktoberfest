#include<iostream>
using namespace std;

void printAllPairs(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    printAllPairs(n);
    return 0;
}