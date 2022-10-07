

#include<iostream>

using namespace std;

void permute(int arr[],int index,int n)
{
   if( index == n-1)
   {
       for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";

       cout<<endl;

       return;
   }
   for(int i=index;i<n;i++)
   {
     swap(arr[i],arr[index]);
     permute(arr,index +1,n);
     swap(arr[i],arr[index]);
   }
  
  return;
}

int main()
{
  int arr[]={1,2,3};
  int n =sizeof(arr)/sizeof(arr[0]);
  
  permute(arr,0,n);

  return 0;
}