package com.hussain;

public class BinarySearch {

    public static void main(String[] args) {
	    int[] arr = {2,3,5,6,8,10,15,19,22};
        System.out.println(binarySearch(arr, 15));
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length-1;
        while (start<=end){
//            int mid = (start + end) / 2; // might be possible that it may exceed the range of int in java
            int mid = start + (end - start) / 2; //suppose start is 5 and end is 15 so the mid should be 10
            // here 5 + (15-5)/2 = 5+5 = 10 same as above but here the range of int will not exceed.
            if (target < arr[mid]){
                end = mid - 1;
            } else if(target > arr[mid]){
                start = mid + 1;
            }else {
                return mid;
            }
        }
        return -1;
    }
}
