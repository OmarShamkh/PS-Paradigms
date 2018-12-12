import java.util.Scanner;

public class Problems9 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];   

        int h = 0;
        int c = 0;
        for (int i = 0; i < n; i++) {

            a[i] = in.nextInt();

            if (a[i] > 0) {
                h += a[i];
            } else if (a[i] < 0) {
                if (h > 0) {
                    h--;
                } else {
                    c++;
                }
            }

        }
        System.out.println(c);

    }

}