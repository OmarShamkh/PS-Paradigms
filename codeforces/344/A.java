import java.util.Scanner;

public class Problems6 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int a;
        int b = 0, count = 0;

        for (int i = 0; i < num; i++) {
            a = in.nextInt();
            if (a != b) {
                count++;
            }
            b = a;
        }

        System.out.println(count);
    }

}