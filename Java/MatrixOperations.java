/*
 To take matrix input from the user and perform Matrix operations like
 1. Check if the matrix is Square
 2. Check if the matrix is Upper Triangular
 3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
 */

import java.util.*;

class Matrix_Operations{
	int matrix[][];
	int r,c;
	Matrix_Operations(int r,int c){
		this.r=r;
		this.c=c;
		matrix=new int[r][c];
	}
	
	//Creating the new matrices
	void create() {
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				matrix[i][j]=sc.nextInt();
			}
		}
	}
	
	//Displaying the created matrices
	void display() {
		System.out.println("The matrix is: ");
		for(int i=0;i<r;i++) {		
			for(int j=0;j<c;j++) {
				System.out.print(matrix[i][j]+" ");
			}
			System.out.println();
		}
	}
	
	//To check if the matrix is a square matrix 
	void square() {
		if(r==c)
			System.out.println("It's a square matrix");
		else
			System.out.println("It is not a square matrix");	
	}
	
	//To check if the given matrix is an upper triangular matrix 
	void upperTri() {
		int isUpper=0;
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				if(j<i && matrix[i][j]!=0)
				isUpper=1;			
			}
		}
		if(isUpper==1)
			System.out.println("It is not an upper triangular matrix");
		else
			System.out.println("It is an upper triangular matrix");	
	}
	
	//To add two matrices
	void add(Matrix_Operations ob) {
		int ans[][]=new int[r][c];
		if(r==ob.r && c==ob.c) {
			for(int i=0;i<r;i++) {
				for(int j=0;j<c;j++) {
					ans[i][j] = matrix[i][j] + ob.matrix[i][j];
				}
				System.out.println();
			}
			System.out.println("The addition of the matrices is: ");
			for(int i=0;i<r;i++) {
				for(int j=0;j<c;j++) {
					System.out.print(ans[i][j] + " ");
				}
				System.out.println();			
			}
		}
		else
			System.out.println("Matrix addition not possible");	
	}
	
	//To multiply two matrices
	void multiply(Matrix_Operations ob) {
		if(c==ob.r) {
			int ans[][]=new int[r][ob.c];
				for(int i=0;i<r;i++) {
				for(int j=0;j<ob.c;j++) {
					for(int k=0;k<ob.r;k++)
						ans[i][j]= ans[i][j] + matrix[i][k] * ob.matrix[k][j];				
				}
			}
			System.out.println("The multiplication of matrices is: ");
			for(int i=0;i<r;i++) {
				for(int j=0;j<c;j++) {
					System.out.print(ans[i][j] + " ");
				}
				System.out.println();
			}
		}
		else
			System.out.println("Matrix multiplication not possible");
	
	}
	
	//To print the transpose of a matrix
	void transpose() {
		int ans[][]=new int[c][r];
		for(int i=0;i<c;i++) {
			for(int j=0;j<r;j++) {
				ans[i][j]=matrix[j][i];
			}
		}
		for(int i=0;i<c;i++) {
			for(int j=0;j<r;j++) {
				System.out.print(ans[i][j]+" ");
			}
			System.out.println();
		}
	}
}

public class MatrixOperations {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the number of rows and columns in the first matrix: ");
		int a1=s.nextInt();
		int b1=s.nextInt();
		System.out.println("Enter the number of rows and columns in the second matrix: ");
		int a2=s.nextInt();
		int b2=s.nextInt();
		
		Matrix_Operations ob1=new Matrix_Operations(a1,b1);
		Matrix_Operations ob2=new Matrix_Operations(a2,b2);
		System.out.println("Enter the elements of the first matrix: ");
		ob1.create();
		ob1.display();
		System.out.println("Enter the elements of the second matrix: ");
		ob2.create();
		ob2.display();
		
		int c;
		do {
			System.out.println("\n1. Check if the matrix is Square\n2. Check if the matrix is Upper Triangular\n3.Add the matrices");
			System.out.println("4.Multiply the matrices\n5.Find the transpose of the matrix\n6.Exit\nEnter your choice:");			
			c=s.nextInt();
			
			switch(c) {
				//Check if the matrix is Square
				case 1: System.out.println("First matrix:");				
							ob1.square();
							System.out.println("Second matrix:");
							ob2.square();
							break;
				
				//Check if the matrix is Upper Triangular
				case 2: System.out.println("First matrix:");				
							ob1.upperTri();
							System.out.println("Second matrix:");
							ob2.upperTri();
							break;
							
				//Add the matrices
				case 3: ob1.add(ob2);
							break;
				
				//Multiply the matrices
				case 4: ob1.multiply(ob2);
							break;
				
				//Find the transpose of the matrix
				case 5: System.out.println("The transpose of the first matrix is:");				
							ob1.transpose();
							System.out.println("The transpose of the second matrix is:");							
							ob2.transpose();
							break;
				
				//Exit case
				case 6: break;
				
				default: System.out.println("Invalid choice");				
								break;				
			}
		}while(c!=6);
	}
}

/*
 Output:
 Enter the number of rows and columns in the first matrix: 
2
2
Enter the number of rows and columns in the second matrix: 
2
2
Enter the elements of the first matrix: 
1
2
3
4
The matrix is: 
1 2 
3 4 
Enter the elements of the second matrix: 
1
1
0
1
The matrix is: 
1 1 
0 1 

1. Check if the matrix is Square
2. Check if the matrix is Upper Triangular
3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
6.Exit
Enter your choice:
1
First matrix:
It's a square matrix
Second matrix:
It's a square matrix

1. Check if the matrix is Square
2. Check if the matrix is Upper Triangular
3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
6.Exit
Enter your choice:
2
First matrix:
It is not an upper triangular matrix
Second matrix:
It is an upper triangular matrix

1. Check if the matrix is Square
2. Check if the matrix is Upper Triangular
3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
6.Exit
Enter your choice:
3


The addition of the matrices is: 
2 3 
3 5 

1. Check if the matrix is Square
2. Check if the matrix is Upper Triangular
3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
6.Exit
Enter your choice:
4
The multiplication of matrices is: 
1 3 
3 7 

1. Check if the matrix is Square
2. Check if the matrix is Upper Triangular
3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
6.Exit
Enter your choice:
5
The transpose of the first matrix is:
1 3 
2 4 
The transpose of the second matrix is:
1 0 
1 1 

1. Check if the matrix is Square
2. Check if the matrix is Upper Triangular
3.Add the matrices
4.Multiply the matrices
5.Find the transpose of the matrix
6.Exit
Enter your choice:
6
 */