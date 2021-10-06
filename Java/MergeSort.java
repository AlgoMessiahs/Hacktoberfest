class Sort{

    public void merge(int[] arr,int left,int mid,int right){
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        for (int i = 0; i < n1; i++){
            arr1[i] = arr[left + i];
        }
            
        for (int j = 0; j < n2; j++){
            arr2[j] = arr[mid + 1 + j];
        }
            
        int i = 0;
        int j = 0;

        int k = left;

        while(i < n1 && j < n2){
            if(arr1[i] < arr2[j]){
                arr[k] = arr1[i];
                i++;
            }

            else{
                arr[k] = arr2[j];
                j++;
            }

            k++;
        }

        while(i < n1){
            arr[k] = arr1[i];
            i++;
            k++;
        }

        while(j < n2){
            arr[k] = arr2[j];
            j++;
            k++;
        }

    }


    public void sort(int[] arr,int left,int right){
        if(left < right){
            int mid = (left + right)/2;

            sort(arr,left,mid);
            sort(arr,mid+1,right);

            merge(arr,left,mid,right);
        }
    }
}

public class MergeSort{
    public static void main(String[] args) {
        int[] arr = {2,3,1,4,6,5};

        System.out.print("Initial Array Before Sorting : ");

        for(int i = 0;i < arr.length;i++){
            System.out.print(arr[i] + " ");
        }

        System.out.println(" ");

        Sort s = new Sort();

        s.sort(arr, 0, arr.length-1);

        System.out.print("Sorted Array Using MergeSort : ");

        for(int i = 0;i < arr.length;i++){
            System.out.print(arr[i] + " ");
        }

        System.out.println(" ");

    }
}