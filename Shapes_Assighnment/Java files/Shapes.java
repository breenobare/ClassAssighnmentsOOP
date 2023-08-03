import java.util.Scanner;

class Shapes {
    public void getDimensions() {
        Scanner scanner = new Scanner(System.in); // Create a Scanner object to read user input
        System.out.println("Enter the length: ");
        length = scanner.nextInt(); // Read and store the length input by the user
        System.out.println("Enter the width: ");
        width = scanner.nextInt(); // Read and store the width input by the user
        scanner.close(); // Close the Scanner object to release resources
        compute(length, width);
    }

    public void compute(int length, int width) {
        int area, perimeter;
        area = length * width; // Compute the area of the shape
        perimeter = 2 * (length + width); // Compute the perimeter of the shape
        display(area, perimeter);
    }

    public void display(int area, int perimeter) {
        System.out.println("Area: " + area); // Display the calculated area
        System.out.println("Perimeter: " + perimeter); // Display the calculated perimeter
    }
}
