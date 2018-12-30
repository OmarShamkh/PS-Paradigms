import java.util.Scanner;

public class Shovel {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int k = in.nextInt(); 
        int r = in.nextInt(); 

        int sum = 1, c = 0;
        boolean b = true;

        while (b) {
            c++;
            sum = k * c;
            if (sum % 10 == 0 || sum % 10 == r) {
                b = false;
            }

        }
        System.out.println(c);

    }

}
