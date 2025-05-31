import java.util.Scanner;

public class CompoundInterest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Calculate Compound Interest.");

        System.out.println("Please Enter your amount Rs: ");
        int principle = input.nextInt();
        System.out.println("Now Tell me your rate of interest: ");
        float rate = input.nextFloat();
        System.out.println("Now Tell me how many year are you borrowing your money:");
        float year = input.nextFloat();

        double compInt = principle * Math.pow((1 + rate /100), year);
        System.out.println("Your compound interest in Rs: " + compInt);



    }
}
