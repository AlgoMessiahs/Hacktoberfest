#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    const int N = 1e6+8;
    int idx[N];
    for(int i=0; i<N;i++){
        idx[i] = -1;
    }

    int min_val = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(idx[a[i]] != -1){
            min_val = min(min_val, idx[a[i]]);
        } else {
            idx[a[i]] = i;
        }
    }

    if (min_val == INT_MAX){
        cout<<"-1"<<endl;
    } else {
        cout<<min_val + 1<<endl;
    }

    return 0;
}