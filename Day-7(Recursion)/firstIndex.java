
import java.io.*;
import java.util.*;

public class firstIndex {

    public static void main(String[] args) throws Exception {
        // write your code here
         int [] arr = {1,3,5,7,3,5,7,10};
         int index = 0;
         int target = 100;
         int result = firstIndex(arr, index, target);
         System.out.print("First index of "+target+" is: ");
         System.out.println(result);
    }
    public static int firstIndex(int[] arr, int idx, int x){
        //Base Case
        if(idx == arr.length)
            return -1;

        if(arr[idx] == x) return idx;

        int result = firstIndex(arr, idx+1, x);
        return result;


    }
=======
import java.io.*;
import java.util.*;

public class firstIndex {

    public static void main(String[] args) throws Exception {
        // write your code here
         int [] arr = {1,3,5,7,3,5,7,10};
         int index = 0;
         int target = 100;
         int result = firstIndex(arr, index, target);
         System.out.print("First index of "+target+" is: ");
         System.out.println(result);
    }
    public static int firstIndex(int[] arr, int idx, int x){
        //Base Case
        if(idx == arr.length)
            return -1;

        if(arr[idx] == x) return idx;

        int result = firstIndex(arr, idx+1, x);
        return result;


    }

}