// package Stack;
import java.util.Stack;
import java.util.Scanner;

public class BalancedParenthesis {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string: ");
        String s = sc.next();
        
        if(isBalanced(s)){
            System.out.println("String is Balanced");
        }else{
            System.out.println("Not Balanced");
        }
    }

    private static boolean isBalanced(String str) {
        int n = str.length();
        if (n % 2 != 0) {
            System.out.println("Unequal number of parentheses");
            return false;
        }

        char[] ch = str.toCharArray();
        Stack<Character> stack = new Stack<>();

        for (char c : ch) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if (c == ')' && !stack.isEmpty() && stack.peek() == '(') {
                stack.pop();
            } else if (c == '}' && !stack.isEmpty() && stack.peek() == '{') {
                stack.pop();
            } else if (c == ']' && !stack.isEmpty() && stack.peek() == '[') {
                stack.pop();
            } else {
                return false;
            }
        }
        return stack.isEmpty();

    }
}
// Time Complexity: O(n)
// Space Complexity: O(n)
