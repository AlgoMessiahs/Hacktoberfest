//Max subarray sum = Total sum of sub array - sun of non-contributing elements
#include<iostream>
using namespace std;

int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++){
        currSum += arr[i];
        if (currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);
    int totalSum=0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    
    wrapSum = totalSum + kadane(arr, n);

    cout<<max(wrapSum,nonWrapSum)<<endl;
    
    return 0;
}