package Exception;

public class ExceptionCatch {

      public static void main(String[] args) {
            try {
                  int result = divide(10, 0);
                  System.out.println("Result:" + result);

            } catch (ArithmeticException e) {
                  System.out.println("Arithmetic Exception: " + e.getMessage());
            } finally {
                  System.out.println("This will always be executed.");
            }
            System.out.println("Program continue.........");
      }

      public static int divide(int a, int b) {
            return a / b;
      }

}
