import java.util.Scanner;

public class DuplicateArray {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int size = sc.nextInt();

        int[] arr = new int[size];

        System.out.println("Enter " + size + " elements:");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        int ans = -1;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j) {
                    continue;
                }
                else if (arr[i] == arr[j]) {
                    ans = arr[i];
                    break;
                }
            }
            if (ans != -1) break;
        }

        if (ans != -1) {
            System.out.println("Duplicate element found: " + ans);
        } else {
            System.out.println("No duplicate element found.");
        }

        sc.close();
    }
}

