import com.sun.source.tree.Tree;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class LearnSet2 {
    public static void main(String[] args) {

        Set<Student> studentSet = new HashSet<>();

        studentSet.add(new Student("Anju", 2));
        studentSet.add(new Student("Ramesh", 4));
        studentSet.add(new Student("Shiva", 3));

        studentSet.add(new Student("Rohit", 2));

        System.out.println(studentSet);

    }

}
