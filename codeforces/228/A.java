import java.util.Scanner;

public class Horseshoe {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int s1 = in.nextInt(); //7
        int s2 = in.nextInt(); //7
        int s3 = in.nextInt(); //7
        int s4 = in.nextInt(); //7
        
        int count = 1;
        if (s1 != s2 && s1 != s3 && s1 != s4) {
            count++; 
        }
        if (s2 != s3 && s2 != s4) {
            count++; 
        }
        if (s3 != s4) {
            count++;
        }
        System.out.println(4-count);

    }

}