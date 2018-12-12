import java.util.Scanner;

public class Problems7 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int x[] = new int[n];

        for (int i = 0; i < n; i++) {
            x[i] = in.nextInt();
        }

        int l = 0, r = n - 1;
        int s = 0, d = 0;
        boolean p = true;

        while (l <= r) {
            if (x[l] >= x[r]) {
                if (p) {
                    s += x[l];
                } else {
                    d += x[l];
                }

                l++;
            } else if (x[l] < x[r]) {
                if (p) {
                    s += x[r];
                } else {
                    d += x[r];
                }

                r--;
            }
            if (p) {
                p = false;
            } else {
                p = true;
            }
        }

        System.out.println(s + " " + d);

    }

}