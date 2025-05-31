import java.util.Scanner;

public class Arithmetic {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Welcome.");
        System.out.print("Enter first number: ");
        int first = input.nextInt();
        System.out.println("Enter Second number: ");
        int second = input.nextInt();

        int add = first + second;
        int  sub = first - second;
        int  mul = first * second;
        int  div = first / second;
        int  mod = first % second;

        System.out.println("Add: " + add);
        System.out.println("sub : " + sub);
        System.out.println("mul : " + mul);
        System.out.println("div : " + div);
        System.out.println("mod : " + mod);


    }
}