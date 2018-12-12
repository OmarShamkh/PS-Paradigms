import java.util.Scanner;

public class Problems8 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String st = in.next();
        int c = 0;
        for (int i = 0; i < n - 1; i++) {
            if (st.charAt(i) == st.charAt(i + 1)) {
                c++;
            }
        }
        System.out.println(c);

    }

}