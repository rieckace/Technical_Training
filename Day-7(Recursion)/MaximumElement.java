public class MaximumElement {
    public static void main(String [] args){
        int [] arr = {1,2,3,8,10,15};
        System.out.print("The maximum element in the array is: ");
        System.out.println(maxElement(arr, 0, arr.length-1));
    }

    
    public static int maxElement(int []arr, int start, int end){
        if(start == end){
            return arr[start];
        }
        int max = maxElement(arr, start+1, end);
        return Math.max(arr[start], max);
    }
    
}

