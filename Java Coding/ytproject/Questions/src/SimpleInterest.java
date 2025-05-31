import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println(" Calculate Simple Interest\n");
        System.out.println("Please Enter your amount Rs: ");
        int principle = input.nextInt();
        System.out.println("Now Tell me your rate of interest: ");
        float rate = input.nextFloat();
        System.out.println("Now Tell me how many year are you borrowing your money:");
        float year = input.nextFloat();

        float interest = (principle * rate * year) / 100;
        System.out.println("\n\n Your Simple interest Rs" + interest);

    }
}