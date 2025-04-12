import java.util.Scanner;

public class Pattern2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the First number: ");
        int n = sc.nextInt();
        System.out.print("Enter the Second number: ");
        int m = sc.nextInt();

        for (int i = 1; i <= n; i++){
            for (int j =1; j <= m; j++){
                if (i == 1 || j == 1  || i == n || j == m){
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
