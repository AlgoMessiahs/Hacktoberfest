// 1 1 0
// 1 1 1
// 0 1 1
// this is a matrix with 0's and 1's we have to count all the square submatrixes with 1 


#include <bits/stdc++.h>
using namespace std;

//This is the driving funciton
int countsquares(int n,int m, vector<vector<int>>&arr)
{
   vector<vector<int>> dp(n,vector<int>(m,0));
   for(int i=0;i<n;i++) dp[i][0]=arr[i][0];
   for(int j=0;j<m;j++) dp[0][j]=arr[0][j];
   for(int i=1;i<n;i++)
   {
    for(int j=1;j<m;j++)
    {
        if(arr[i][j]==0)dp[i][j]=0;
        else {
            dp[i][j] = 1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));  
         }
    }
   }
   int sum=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        sum+=dp[i][j];
    }
   }
   return sum;
}

//
int main()
{
    int n=3;
    int m=3;
    vector<vector<int>>arr;
    arr.push_back({1,1,0});
    arr.push_back({1,1,1});
    arr.push_back({0,1,1});
    cout<<countsquares(n,m,arr);
    
}