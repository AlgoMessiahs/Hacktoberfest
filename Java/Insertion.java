
public class Insertion {

    static void Sorting(int a[]) {
        
        for (int i = 0; i < a.length; i++) {
            int key = a[i];
            int k = i -1;

            while (k >= 0 && a[k] > key) {
                a[k+1] = a [k];
                k = k-1;
            }
            a[k+1] = key;
        }
    }

    static void Printing(int a[]) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] a = {67,34,23,65,29};
        System.out.print("Initial array:");
        Printing(a);
        Sorting(a);

        System.out.print("Sorted array:");
        Printing(a);
    }
}