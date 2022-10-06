#include<iostream>
using namespace std;

int knapsack(int W, int wt[], int val[], int n){
    if(n == 0 || W == 0){ //base case
        return 0;
    }
    if(wt[n-1] > W){
        return knapsack(W,wt,val,n-1);
    }
    else{
        return max(val[n-1] + knapsack(W-wt[n-1],wt,val,n-1),knapsack(W,wt,val,n-1));
    }
}

int main()
{
    int W = 50;
    int wt[] = {10,20,30};
    int val[] = {100,50,150};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<knapsack(W,wt,val,n)<<endl;
    return 0;
}
