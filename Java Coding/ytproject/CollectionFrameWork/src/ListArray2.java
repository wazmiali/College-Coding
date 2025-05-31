import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ListArray2 {
    public static void main(String[] args) {

        List<Integer> list = new ArrayList<>();

        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);
        list.add(60);
        list.add(70);
        list.add(80);

        for(int i = 0; i < list.size(); i++){
            System.out.println("The element is " + list.get(i));
        }


        for(Integer element: list){
            System.out.println("Foreach element is " +  element);
        }


        Iterator<Integer> it = list.iterator();

        while (it.hasNext()){
            System.out.println("iterator " + it.next());
        }
    }
}
