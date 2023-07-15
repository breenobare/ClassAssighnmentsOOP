import java.util.Scanner;

class Shapes {
    private int length, width, area, perimeter;

    public void getDimensions() {
        Scanner scanner = new Scanner(System.in); // Create a Scanner object to read user input
        System.out.println("Enter the length: ");
        length = scanner.nextInt(); // Read and store the length input by the user
        System.out.println("Enter the width: ");
        width = scanner.nextInt(); // Read and store the width input by the user
        scanner.close(); // Close the Scanner object to release resources
    }

    public void compute() {
        area = length * width; // Compute the area of the shape
        perimeter = 2 * (length + width); // Compute the perimeter of the shape
    }

    public void display() {
        System.out.println("Area: " + area); // Display the calculated area
        System.out.println("Perimeter: " + perimeter); // Display the calculated perimeter
    }
}
