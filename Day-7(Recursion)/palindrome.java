import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        // Preprocess the string
        String cleanedStr = preprocessString(str);

        if (isPalindrome(cleanedStr, 0, cleanedStr.length() - 1)) {
            System.out.println("Palindrome String");
        } else {
            System.out.println("Not a palindrome");
        }
    }

    public static String preprocessString(String str) {
        // Remove non-alphanumeric characters and convert to lowercase
        StringBuilder sb = new StringBuilder();
        for (char c : str.toCharArray()) {
            if (Character.isLetterOrDigit(c)) {
                sb.append(Character.toLowerCase(c));
            }
        }
        return sb.toString();
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
