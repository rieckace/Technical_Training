public class Vehicle{
    String name;
    int year;
    double price;
    String fuelType;
    String color;

    // Make the constructor
    public Vehicle(String name, int year, double price, String fuelType, String color){
        this.name = name;
        this.year = year;
        this.price = price;
        this.fuelType = fuelType;
        this.color = color;
    }

    // Make the method
    public void color(){
        System.out.println("The color of the car is " + color);
    }

    // display the output

    public void display(){
        System.out.println("The name of the car is " + name);
        System.out.println("The manufactured year of the car is " + year);
        System.out.println("The price of the car is " + price);
        System.out.println("The fuel type of the car is " + fuelType);
        System.out.println("The color of the car is " + color);
    }

    public static void main(String[] args) {
        Vehicle car1 = new Vehicle("Lamborghini", 2024, 2000000, "Petrol", "Yellow");
        Vehicle car2 = new Vehicle("Ferrari", 2023, 1500000, "Petrol", "Red");
        Vehicle car3 = new Vehicle("Bugatti", 2022, 2500000, "Petrol", "Blue");
    
    car1.display();
    System.out.println();

    car2.display();
    System.out.println();

    car3.display();
    System.out.println();

    }

}