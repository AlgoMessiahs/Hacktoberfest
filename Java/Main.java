package com.company;

public class Main {

    public static void main(String[] args) {
        System.out.println("User Define Exception");
        try {
            throw new MyException("Yash");
        }
        catch (MyException e){
            System.out.println(e);
        }
        System.out.println("Unchecked Exception");
        System.out.println("Example 1");
        try{
            int a =0;
            int b =154;
            int c=b/a;
        }catch(ArithmeticException e){
            System.out.println(e.getMessage());
            System.out.println("invalid Division");
        }
        System.out.println("Example 2");
        try{
            int arr[] ={1,2,3,4,5,};
            System.out.print(arr[7]);

        }catch (ArrayIndexOutOfBoundsException e3){
            System.out.println("Array index is invalid");
        }
        System.out.println("Presented by Yash Patel-D21DCS154");
    }
}
