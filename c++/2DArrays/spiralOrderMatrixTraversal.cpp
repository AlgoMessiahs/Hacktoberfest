#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    
    while(row_start<=row_end && col_start<=col_end){
        //for col_start
        for(int i=col_start;i<=col_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;
        //for row_start
        for(int i=row_start;i<=row_end;i++){
            cout<<a[i][col_end]<<" ";
        }
        col_end--;
        //for col_end
        for(int i=col_end;i>=col_start;i--){
            cout<<a[row_end][i]<<" ";
        }
        row_end--;
        //for row_end
        for(int i=row_end;i>=row_start;i--){
            cout<<a[i][col_start]<<" ";
        }
                col_start++;
    }
    
    return 0;
}
// 1 5 7 9 10 11
// 6 10 12 13 20 21 
// 9 25 29 30 32 41 
// 15 55 59 63 68 70 
// 40 70 79 81 95 105   