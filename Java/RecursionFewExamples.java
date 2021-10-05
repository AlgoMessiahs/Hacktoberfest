package recursion;

public class RecursionFewExamples {
  static int step =0;
	public static void main(String[] args) {
	//	System.out.println(sum(5));
	System.out.println(factorial(8));
     System.out.println(power(2,5));
     System.out.println("steps "+step);
     step =0;
     System.out.println(fastPower(2,5));
     System.out.println("steps "+step);
     
     int arr[]= new int[5];
     
	}



public static int sum(int n) {
	if(n==1) {
		return 1;
	}
	return n+ sum(n-1);
}
public static int factorial(int n) {
	if(n==1) {
		return n;
	}
	return n *factorial(n-1);
}

public static int power(int m, int n) {
	step++;
	if(n==0) return 1;
	return m* power(m,n-1);
}

public static long fastPower(long m,long n) {
	step++;
	int mod=12;;
	if(n==0) return 1;
	if(n%2==0) { 
		return fastPower(m*m,n/2);
	}
	return m * fastPower(m,n-1);
}
}