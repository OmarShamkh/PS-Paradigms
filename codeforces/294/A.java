
import java.util.Scanner;

public class Oskols {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < a.length; i++) {
            a[i] = in.nextInt();
        }

        int m = in.nextInt();
        int x[] = new int[m];
        int y[] = new int[m];

        for (int i = 0; i < m; i++) {
            x[i] = in.nextInt();
            y[i] = in.nextInt();

            int px = x[i] - 1;
            int py = y[i] - 1;

            if (px > 0) {
                a[px - 1] += py;
            }
            if (px < n - 1) {
                a[px + 1] += a[px] - (py + 1);
            }
            a[px] = 0;
        }
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }

    }

}