#include<iostream>
using namespace std;

//----- Only used in sorted array ------
//----- Time Complexity will be O(n)------
bool pairSum(int arr[],int k){
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    while(low < high){
        if(arr[low] + arr[high] == k){
            cout<<"Index:"<<low<<" "<<high<<endl;
            cout<<"Value of Index:"<<arr[low]<<" "<<arr[high]<<endl;
            return true;
        } else if(arr[low] + arr[high] > k){
            high--;
        } else {
            low++;
        }
    }
    return false;
}
//------ Time Complexity will be O(nˆ2)------
// bool pairSum(int arr[], int n, int k){
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j] == k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

int main()
{
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    cout<<pairSum(arr,k)<<endl;
    return 0;
}