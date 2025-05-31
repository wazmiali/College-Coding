import java.util.Scanner;

public class Relational {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Driving Licence Portal");
        System.out.println("Please Enter your age: ");
        int age = input.nextInt();

        if (age > 18) {
            System.out.println("Your are eligible to drive.");
        } else {
            System.out.println("You are not eligible.");
        }


    }
}
