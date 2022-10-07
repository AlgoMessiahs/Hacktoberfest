#include<iostream>
using namespace std;

//-----Time Complexity will be O(n)------
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }   
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum += a[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout<<maxSum<<endl;

    return 0;
}


//-----Time Complexity will be O(nˆ2)------
// int main()
// {
//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }   

//     int currSum[n+1];
//     currSum[0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         currSum[i] = currSum[i-1] + a[i-1];
//     }
    

//     int maxSum = INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum=0;
//         for(int j=0; j<i; j++){
//             sum = currSum[i] - currSum[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }