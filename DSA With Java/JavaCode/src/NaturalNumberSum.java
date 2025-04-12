import java.util.Scanner;

public class NaturalNumberSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
//Sum of Natural Numbers

//        int sum = 0;
//        for (int i=0; i<=n; i++){
//            sum = sum + i;
//        }
//        System.out.println(sum);


        //Tables
        for(int i = 1; i<11; i++){
            System.out.println(n*i);
        }
    }
}
