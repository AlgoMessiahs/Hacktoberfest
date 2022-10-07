#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int key;
    cout<<"Enter the key to be searched:";
    cin>>key;

    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    //Taken Top-Right Corner of the matrix as the starting point
    int row = 0, col = m-1;
    bool found = false;

    while(row<n && col>=0){
        if(matrix[row][col] == key){
            found = true;
            break;
        } else if(matrix[row][col] > key){
            col--;
        } else {
            row++;
        }
    }

    if(found){
        cout<<"Key found"<<endl;
    } else {
        cout<<"Key not found"<<endl;
    }
    return 0;
}