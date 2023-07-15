// Main class is defined in its own file, named Main.java
public class Main {
    public static void main(String[] args) {
        Shapes shapeObj = new Shapes(); // Create an object of the Shapes class
        shapeObj.getDimensions(); // Prompt the user to enter dimensions
        shapeObj.compute(); // Compute the area and perimeter
        shapeObj.display(); // Display the results
    }
}
