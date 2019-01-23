import java.util.Scanner;

public class Die_Roll {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int Y = in.nextInt();
        int W = in.nextInt();

        String prob[] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};

        int D = Math.max(Y, W);

        System.out.println(prob[D]);

    }
}