import java.util.Scanner;

public class Pattern5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();


        //outer loop
        for (int i=1; i<=n; i++){
            // Inner loop -> space print
            for(int j=1; j<=n-i; j++){
                System.out.print(" ");
            }
            //inner loop -> star print
            for (int j=1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
