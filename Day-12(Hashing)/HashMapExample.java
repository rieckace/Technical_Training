import java.util.*;
import java.util.HashMap;

public class HashMapExample{
    public static void main(String[] args){
        HashMap<String, Integer> map = new HashMap<>();
        map.put("Rikesh", 90);
        map.put("Hukkum", 95);
        map.put("Chane", 80);
        map.put("Chiku", 85);
        map.put("Safed Kurta",75);
        

        // To retrieve the data
        System.out.println("Rank of Rikesh: "+ map.get("Rikesh"));
        System.out.println("Rank of Hukkum: " + map.get("Hukkum"));  
        System.out.println("Rank of Chane: " + map.get("Chane"));
        System.out.println("Rank of Chiku: " + map.get("Chiku"));       
        System.out.println("Rank of Safed Kurta: "+ map.get("Safed Kurta"));

        // To retrieve all the keys
        Set<String> keys = map.keySet();
        System.out.println("Keys: " + keys);

        // To retrieve all the values
        Collection<Integer> values = map.values();
        System.out.println("Values: " + values);

        // TO remove the values

        map.remove("Safed Kurta");
        System.out.println("After removing Safed Kurta: " + map);
    }
}