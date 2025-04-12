import javax.sql.rowset.spi.SyncResolver;
import java.util.Scanner;

public class Switch {
    public static void main(String[] args) {
        System.out.println("Switch Case.");
        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();

        switch (button){
            case 1:
                System.out.println("Ok");
                break;
            case 2 :
                System.out.println("How Are You.");
                break;
            case 3 :
                System.out.println("I am Fine.");
                break;
            case 4 :
                System.out.println("I am also FIne.");
                break;
            default:
                System.out.println("Thank you");

        }
    }
}
