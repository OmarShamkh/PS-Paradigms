import java.util.Scanner;

public class ColorfulStones {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = in.next();

        int pos = 0;
        for (int i = 0; i < t.length(); i++) {
            if (t.charAt(i) == s.charAt(pos)) {
                pos += 1;
            }
        }
        System.out.println(pos + 1);
    }

}