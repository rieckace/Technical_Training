import java.util.*;

class Solution {
    static boolean areAnagram(String c1, String c2) {
        // Convert strings to lowercase
        c1 = c1.toLowerCase();
        c2 = c2.toLowerCase();
        
        // If lengths are different, they can't be anagrams
        if (c1.length() != c2.length()) {
            return false;
        }
        
        // Create frequency map for characters
        HashMap<Character, Integer> map = new HashMap<>();
        
        // Count frequency of characters in first string
        for (char c : c1.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        
        // Check characters in second string
        for (char c : c2.toCharArray()) {
            if (!map.containsKey(c)) {
                return false;
            }
            map.put(c, map.get(c) - 1);
            if (map.get(c) == 0) {
                map.remove(c);
            }
        }
        
        return map.isEmpty();
    }
}

public class Anagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {       
            System.out.println("Enter first string:");
            String str1 = sc.nextLine();
            System.out.println("Enter second string:");
            String str2 = sc.nextLine();
            
            Solution obj = new Solution();
            if (obj.areAnagram(str1, str2)) {
                System.out.println("Yes, Valid Anagram!");
            } else {
                System.out.println("Not a valid Anagram!");
            }
        } finally {
            sc.close();
        }
    }
}
