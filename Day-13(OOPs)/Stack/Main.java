import java.util.Stack;

public class Main {
    public static void main(String [] args){
        Stack<Integer>st = new Stack<>();

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(10);
        st.push(5);
        st.push(6);
        st.push(7);

        System.out.println("Elements in the stack: ");
        for(int i = 0; i < st.size(); i++){
            System.out.println(st.get(i));
        }

        st.pop();
        st.pop();
        st.pop();

        System.out.println("Elements in the stack after removing some elements: ");
        for(int i = 0; i < st.size(); i++){
            System.out.println(st.get(i));
    }

    System.out.println("\nTop element is: " + st.peek());
    System.out.println("\nSize of stack is: " + st.size());
    System.out.println("\nIs Stack empty?-> " + st.isEmpty());
    // System.out.println("\nSize of stack is: " + ((Object) st).isFull());
}
}
