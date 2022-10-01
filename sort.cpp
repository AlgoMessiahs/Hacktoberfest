#include <iostream>
using namespace std;
int main()
{
 int n, count = 0, swap = 0, compare = 0;
 cout << "Enter the number of elements: ";
 cin >> n;
 int arr[n];
 cout << "Enter elements:" << endl;
 for (int i = 0; i < n; i++)
 {
 cin >> arr[i];
 }
 int key, j;
 count++; // for i=1
 for (int i = 1; i < n; i++)
 {
 count++; //for i<n
 key = arr[i];
 count++; //for key=arr[i]
 j = i;
 count++; //for j=i
 compare++;
 while (j > 0 && arr[j - 1] > key)
 {
 count++; //for condition
 swap++; //for swapping
 arr[j] = arr[j - 1];
 j--;
 count++; //j--
 }
 count++; //false while condition
 arr[j] = key
 count++; // arr=key
 count++; // i++
 }
 count++; //false for condition
 for (int i = 0; i < n; i++)
 cout << arr[i] << " ";
}
