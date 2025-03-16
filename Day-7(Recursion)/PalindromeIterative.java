
public class PalindromeIterative {
    public static void main(String[] args) {
        String s = "a man, a plan, a canal Panama ";
        
        if (isPalindrome(s)) {
            System.out.println(s + " is a palindrome.");
        } else {
            System.out.println(s + " is not a palindrome.");
        }
    }

    public static boolean isPalindrome(String s) {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            if (s.charAt(l) != s.charAt(r)) {
                return false; 
            }
            l++;
            r--;
        }
        return true;
    }
}
=======
public class PalindromeIterative {
    public static void main(String[] args) {
        String s = "a man, a plan, a canal Panama ";
        
        if (isPalindrome(s)) {
            System.out.println(s + " is a palindrome.");
        } else {
            System.out.println(s + " is not a palindrome.");
        }
    }

    public static boolean isPalindrome(String s) {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            if (s.charAt(l) != s.charAt(r)) {
                return false; 
            }
            l++;
            r--;
        }
        return true;
    }
}

