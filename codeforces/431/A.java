import java.util.Scanner;

public class BlackSquar {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int a[] = new int[4];

        for (int i = 0; i < 4; i++) {
            a[i] = in.nextInt();
        }

        String s = in.next();

        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '1') {
                sum += a[0];
            } else if (s.charAt(i) == '2') {
                sum += a[1];
            } else if (s.charAt(i) == '3') {
                sum += a[2];
            } else if (s.charAt(i) == '4') {
                sum += a[3];
            }

        }
        System.out.println(sum);

    }

}