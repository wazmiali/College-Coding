import java.util.Arrays;
public class Mark {
    public static void main(String[] args) {
        int age = 33;
        int phy = 97;
        int chem = 98;
        int eng = 95;

        int[] marks = new int[3];
        marks[0] = 97;
        marks[1] = 98;
        marks[2] = 95;
//        System.out.println(marks[0]);

        //length
//        System.out.println(marks.length);

        //Sort array
        System.out.println(marks[0]);
        Arrays.sort(marks);
        System.out.println(marks
        [0]);
    }
}
