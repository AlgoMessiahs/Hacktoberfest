#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currVal = 0, maxVal = 0;
    int st=0, maxst=0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currVal > maxVal){
                maxVal = currVal;
                maxst = st;
            }
            currVal = 0;
            st = i+1;
        }else{
            currVal++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<maxVal<<endl;
    for(int j=0; j<maxVal; j++){
        cout<<arr[j+maxst];
    }cout<<endl;
    return 0;
}