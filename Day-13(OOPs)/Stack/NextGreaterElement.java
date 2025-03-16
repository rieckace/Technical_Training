// package Stack;

import java.util.Stack;

public class NextGreaterElement {
    
    public static void main(String[] args) {
        int arr[] = {1, 3, 2, 4};
        int n = arr.length;
        int res[] = nextGreaterElement(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(res[i] + " ");
        }
    }
    private static int[] nextGreaterElement(int[] arr, int n) {
        // Using Stack Optimized Approach

        // int res[] = new int[n];
        // Stack<Integer> st = new Stack<>();
        // for (int i = n - 1; i >= 0; i--) {
        //     while (!st.isEmpty() && st.peek() <= arr[i]) {
        //         st.pop();
        //     }
        //     if (st.isEmpty()) {
        //         res[i] = -1;
        //     } else {
        //         res[i] = st.peek();
        //     }
        //     st.push(arr[i]); 
        // }

        // Brute Force Approach
        int res[] = new int[n];

        for(int i = 0; i<n; i++){
            res[i] = -1;
            for(int j = i+1; j<n; j++){
                if(arr[j] > arr[i]){
                    res[i] = arr[j];
                    break;
                }
            }
        }
        return res;
    }
}
