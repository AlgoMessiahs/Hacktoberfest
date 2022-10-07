#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    // Checking that Is there any queen in the row? if yes then return false means we can not place queen here
    for(int row = 0;row<n;row++){   
        if(arr[row][y] == 1){
            return false;
        }
    }
    // Checking that is there any queen in the right side Diagonally? if yes then return false means we can not place queen here
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col--;
    }
    // Checking that is there any queen in the left side Diagonally? if yes then return false means we can not place queen here
    row = x;
    col = y;
    while (row >= 0 && col >= n)
    {
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }

    return true;// if Condition does not returns false then we will return true
    
}

bool nQueen(int** arr, int x, int n){

    if(x>=n){
        return true; // base case
    }

    for(int col=0; col<n;col++){
        if(isSafe(arr, x, col, n)){ // Checking current position
            arr[x][col] = 1;
            if(nQueen(arr, x+1, n)){ //Checking for next position
                return true;
            }
            arr[x][col] = 0; //backtracking
        }
    }

    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            arr[i][j] = 0;
        }
    }
    if(nQueen(arr,0,n)){
        for (int i = 0; i < n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    }
    
    return 0;
}