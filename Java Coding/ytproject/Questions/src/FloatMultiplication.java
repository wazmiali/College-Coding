import java.util.Scanner;

public class FloatMultiplication {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("We are doing a Float mul.\n");
        System.out.println("Enter first number: ");
        double first = input.nextDouble();
        System.out.println("Enter second number: ");
        double second = input.nextDouble();

        System.out.println("\n Result is: " + first * second);

    }
}
