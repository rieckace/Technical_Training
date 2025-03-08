import java.util.Scanner;

public class StairCasePath {

    public static void main(String[] args) {
        // Your code here
        String str = "";
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the total number of steps in stairCase: ");
        int n = sc.nextInt();
        System.out.println("The number of ways to reach the top " + n + " of the stairs is: ");
        stairCase(n, str);
    }

    public static void stairCase(int n, String str){
        if(n==0){
            System.out.println(str);
            return;
        }
        if(n<0){
            return;
        }
        //  methods 
        stairCase(n-1, str+"1 ");
        stairCase(n-2, str+"2 ");
    }
}