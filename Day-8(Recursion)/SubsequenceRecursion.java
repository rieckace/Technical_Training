public class SubsequenceRecursion {
    public static void main(String[] args) {
        String str = "abc";
        
        //function call
        subsequences(str, 0, "");
    }
    public static void subsequences(String str, int index, String current) {
        if (index == str.length()) {
            System.out.println(current);
            return;
        }
        //I am taking the character at index
        subsequences(str, index + 1, current + str.charAt(index));

        //I am not taking the character at index
        subsequences(str, index + 1, current+"_");
    }
}
