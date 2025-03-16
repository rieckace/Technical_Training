import java.util.Scanner;;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList list = new LinkedList(); 

        System.out.println("Enter the number of elements:");
        int n = sc.nextInt();
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            int value = sc.nextInt();
            Node node = new Node(value);
            list.addToTheLast(node);
        }

        System.out.println("Enter the element to add at the beginning:");
        int firstValue = sc.nextInt();
        Node firstNode = new Node(firstValue);
        list.addFirst(firstNode);

        System.out.println("Enter the element to add in the middle:");
        int middleValue = sc.nextInt();
        System.out.println("Enter the position to add the element:");
        int position = sc.nextInt();
        Node middleNode = new Node(middleValue);
        list.addMiddle(middleNode, position);

        list.printList();

        System.out.println("After deleting the first node:-");
        list.deleteFirst();
        list.printList();
        
        System.out.println("Enter the position to remove the node: ");
        int post = sc.nextInt();
        list.deleteAtPos(post);
        list.printList();
        System.out.println("Node removed successfully.");

        System.out.println("\nAfter removing the last node->");
        list.deleteLast();
        list.printList();
        sc.close();
    }

}
class Node {
    int data;
    Node next;
    Node(int d) {
        data = d; 
        next = null;
    }
}
class LinkedList {
    Node head; 

    // Adding at the last 
    public void addToTheLast(Node node) {
        if (head == null) {
            head = node;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = node;
        }
    }
    // Add a node at the beginning
    public void addFirst(Node node) {
        if (head == null) {
            head = node;
        } else {
            node.next = head;
            head = node;
        }
    }

    // Add a node in the middle
    public void addMiddle(Node node, int pos) {
        if (head == null) {
            head = node;
        } else {
            Node temp = head;
            for (int i = 0; i < pos - 1; i++) {
                temp = temp.next;
            }
            node.next = temp.next;
            temp.next = node;
        }
    }

    // remove the first node

    public void deleteFirst(){
        if(head == null){
            System.out.println("🆒✅Linked List is empty. Try Inserting the elements before deleting.😎");
        }
        else{
            head = head.next;
        }
    }

    // Delete at position
    public void deleteAtPos(int pos){
        if(head == null){
            System.out.println("Linked List is empty.");
            return;
        }
        if(pos == 0){
            head = head.next;
            return;
        }

        else{
            Node temp = head;
            for(int i = 1; i<pos-1;i++){
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
    }

    // Delete at last

    public void deleteLast(){
        if(head == null){
            System.out.println("Empty Linked list");
            return;
        }
        else{
            Node temp = head;
            while(temp.next.next != null){
                temp = temp.next;
            }
            temp.next = null;
        }
    }

    public void printList() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }  
        System.out.println();
    }
}
