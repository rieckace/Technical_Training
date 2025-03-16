public class BubbleSort{
    public static void main(String [] args){
        int [] arr = {5, 6, 8, 1, 2};
        int n = arr.length;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    arr[j] = arr[j] ^ arr[j+1];
                    arr[j+1] = arr[j] ^ arr[j+1];
                    arr[j] = arr[j] ^ arr[j+1];
                }
            }
        }
        System.out.println("SOrted array :");
        for(int i = 0; i<n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}