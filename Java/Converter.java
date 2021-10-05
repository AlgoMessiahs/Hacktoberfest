package com.company;

import java.util.Scanner;

public class Converter {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the pound:");
        Float pound = scan.nextFloat();
        Float a = pound*100;
        System.out.print("Rupees : "+ a );

    }
}
