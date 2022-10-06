#include<iostream>
using namespace std;

int main()
{
    int row,cloumn;
    cin>>row>>cloumn;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=cloumn;j++){
            if(i==1||i==row||j==1||j==cloumn){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}