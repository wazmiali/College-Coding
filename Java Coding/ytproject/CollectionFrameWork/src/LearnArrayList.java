import java.util.ArrayList;
import java.util.List;

public class LearnArrayList {
    public static void main(String[] args) {

        List<Integer> list = new ArrayList<>();

        list.add(1);
        list.add(2);
        list.add(3);
        System.out.println(list);

        // show the list and update a one element 4 add in the list

        list.add(4);
        System.out.println(list);

        // Set function
        // add the element in index of 1 and old element are remove of index 1
        list.set(1, 100);
        System.out.println(list);

        // check the element are present in the list
        System.out.println(list.contains(100));

        // add the new element in the list index of 1

        list.add(1, 40);
        System.out.println(list);

        // add a new list in the old list

        List<Integer> newList = new ArrayList<>();

        newList.add(150);
        newList.add(160);

        list.addAll(newList);
        System.out.println(list);

        // access the index element

        System.out.println(list.get(1));

        // Remove the element index 5

        list.remove(5);
        System.out.println(list);

        // Remove the element of list value is 160

        list.remove(Integer.valueOf(160));
        System.out.println(list);
        // Clear the full list

        list.clear();
        System.out.println(list);

    }
}
