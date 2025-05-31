import java.util.Scanner;

public class FahrenheitToCelsius {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Welcome to temperature Converter.");
        System.out.print("Enter your tem in F: ");
        float fah = input.nextFloat();
        float cel = (fah - 32) * 5 /9;
        System.out.println("Your Temperature is "  + cel + "C");

    }
}