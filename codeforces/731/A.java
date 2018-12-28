import java.util.Scanner;

public class NightMuseum {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        String name = in.next();

        name = 'a' + name;

        int sum = 0;
        for (int i = 1; i < name.length(); i++) {
            sum += Math.min(Math.abs(name.charAt(i) - name.charAt(i - 1)), 26 - Math.abs(name.charAt(i) - name.charAt(i - 1)));
        }
        System.out.println(sum);

    }
}