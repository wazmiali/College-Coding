import java.sql.SQLOutput;
import java.util.Stack;

public class LearnStack {
    public static void main(String[] args) {

        Stack<String> animal = new Stack<>();
        animal.push("10");
        animal.push("20");
        animal.push("30");
        animal.push("40");

        System.out.println("Stack: " + animal);

        System.out.println(animal.peek());

        animal.pop();

        System.out.println(animal.peek());

        System.out.println("Stack: " + animal);


    }
}
