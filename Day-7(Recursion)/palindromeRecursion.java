
import java.util.Scanner;

public class palindromeRecursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        // Preprocess the string
        String str = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();

        if (isPalindrome(str, 0, str.length() - 1)) {
            System.out.println("The string is a palindrome");
        } else {
            System.out.println("The string is not a palindrome");
        }
    }

    public static boolean isPalindrome(String str, int start, int end) {
        if (start >= end) {
            return true;
        }
        if (str.charAt(start) != str.charAt(end)) {
            return false;
        }
        return isPalindrome(str, start + 1, end - 1);
    }
}

    // String cleanStr = str.replaceAll("\\s+", "").toLowerCase(); 
=======
import java.util.Scanner;

public class palindromeRecursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        // Preprocess the string
        String str = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();

        if (isPalindrome(str, 0, str.length() - 1)) {
            System.out.println("The string is a palindrome");
        } else {
            System.out.println("The string is not a palindrome");
        }
    }

    public static boolean isPalindrome(String str, int start, int end) {
        if (start >= end) {
            return true;
        }
        if (str.charAt(start) != str.charAt(end)) {
            return false;
        }
        return isPalindrome(str, start + 1, end - 1);
    }
}

    // String cleanStr = str.replaceAll("\\s+", "").toLowerCase(); 

