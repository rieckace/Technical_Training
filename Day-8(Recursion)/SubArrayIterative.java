import java.util.Scanner;

public class SubArrayIterative {
    private static final int INT_MIN = -1000;
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
    
            System.out.print("Enter the size of the array: ");
            int n = sc.nextInt();
    
            int[] arr = new int[n];
    
            System.out.println("Enter the elements of the array: ");
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            generateSubArray(arr, n);
            sumOfSubArray(arr, n);
            // System.out.println("Sum of SubArray is: " + sum);
        }
    
        public static void generateSubArray(int[] arr, int n) {
            // int maxSum  = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    for (int k = i; k <= j; k++) {
                        System.out.print(arr[k] + " ");
                        // Sum += arr[k];
                    }
                    System.out.println();
                }
                System.out.println();
    
            }
    
        }
        static int maxSum = INT_MIN;
            public static void sumOfSubArray(int[] arr, int n) {
                for (int i = 0; i < n; i++) {
                    int sum = 0;
                    for (int j = i; j < n; j++) {
                        sum += arr[j];
                        maxSum = Math.max(maxSum, sum);
                System.out.println("Sum of SubArray from " + i + " to " + j + " is: " + sum);
            }
            System.out.println();
        }
        System.out.println("Maximum Sum of SubArray is: " + maxSum);

    }


}
