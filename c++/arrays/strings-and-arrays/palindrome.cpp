#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = true;
    for(int i=0; i<n/2; i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            check = false;
            break;
        }
    }
    if(check)
    {
        cout<<"It is a palindrome";
    }
    else
    {
        cout<<"It is not a palindrome";
    }
    return 0;
}