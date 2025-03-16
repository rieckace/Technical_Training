import java.util.Scanner;

public class Number {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in); 
        System.out.print("Enter the starting number (n): ");

        int n = scanner.nextInt(); 
        scanner.close(); 
        printNumbers(n); 
    }

    public static void printNumbers(int n) {  
        if (n == 0) { // Base case
            return;
        }

        
        //Print the number in the increasing order
        // printNumbers(n-1); 
        // System.out.println(n); 

        //Print the number in the decreasing order
        System.out.println(n);
        printNumbers(n-1); 
    }
}
