import java.util.Scanner;

public class TriangleArea {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Calculate Area.");
        System.out.print("Enter your bass in cms: ");
        double base = input.nextDouble();
        System.out.print("Now Enter your perpendicular height in cms: ");
        double height = input.nextDouble();

//        double area = 0.5 * base * height;
        double area = (base * height) / 2;
        System.out.println("The area of a triangle is:  " + area + "cms");
    }
}
