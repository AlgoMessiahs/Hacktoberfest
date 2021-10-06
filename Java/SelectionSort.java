package algorithms.arrays;

public class SelectionSort {

	public static void main(String[] args) {
		
		 
		    //  code to test 
		      Selection ob = new Selection();
		        int arr[] = {5,9,8,2,1};
		        ob.SelectionSort(arr);
		        System.out.println("Sorted array");
		        ob.printArray(arr);
		    }
}
class Selection
{
    void SelectionSort(int arr[])
    {
        int n = arr.length;
 
        // One by one move boundary of unsorted subarray
        for (int i = 0; i < n-1; i++)
        {
            // Find the minimum element in unsorted array
            int min_idx = i;
            for (int j = i+1; j < n; j++) {
                if (arr[j] < arr[min_idx])
                    min_idx = j;
           
            }
            // Swap the found minimum element with the first
            // element
            
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            
        }
    }
 
    // Prints the array
    void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
}


/*
 
OUTPUT : 
 Sorted array
1 2 5 8 9  

 
 */

/* Approach : 
 
 Let's say that elements of our input array are: (5, 9, 8, 2 and 1).
As the length of the array is 5 that means there will be a total of four iterations.
What we basically do is, find the minimum value in the array and swap it with the first element. And at the end of each iteration, the smallest value will get placed at the correct position of the array. Let's take a look at that.
•	In the first iteration, our i remains fixed at 0 index that is element 5, min is also fixed at 0 index. But j is initialized with i+1 i.e 1, then we compare 9 with 5, but 9 is not smaller than 5 therefore m will not update.
•	Then j is incremented to 2 and 8 is compared with 5 but 8 is not smaller than 5 therefore m will not update.
•	Then j is incremented to 3 and now 1 is compared with 5, since 1 is smaller than 5 therefore m gets updated to index 3.
•	Then j is again incremented to 4 and 2 is compared with 1, since 2 is greater than 1 therefore m will remain the same.
•	After getting out of the for loop of j, m will be pointing towards the index of minimum value, i.e. 3 in this case.
•	And then we swap value at index i and value at index m.
•	Since the smallest element is placed at the right position, that is at the first index. So, next time, 'for' loop of j will run for one iteration less.

 
 
 
 */
