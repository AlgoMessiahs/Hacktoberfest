// SORTED ARRAY


#include<iostream>
using namespace std;

bool array_sorted(int *arr,int size){
if (size==0|| size==1)
    return 1;

if (arr[0]>arr[1])
    return false ;
else {
    bool remaing_part = array_sorted(arr+1,size -1);
    return remaing_part;
}
}

int main()
{
    int arr[5] = {4,5,7,8,9};
    // int arr[5] = {4,6,7,5,9};
    int size =5;
    bool ans = array_sorted(arr, size);
if (ans)
{
    cout<<"array is sorted";
}
else 
cout<<"array is not sorted";

return 0;
}