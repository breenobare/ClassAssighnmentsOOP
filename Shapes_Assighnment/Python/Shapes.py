class Shapes:
    def getDimensions(self):
        length = int(input("Enter the length: "))  # Prompt user to enter length
        width = int(input("Enter the width: "))  # Prompt user to enter width
        self.compute(length, width)

    def compute(self, length, width):
        area = length * width  # Compute area by multiplying length and width
        perimeter = 2 * (length + width)  # Compute perimeter using the formula
        self.display(area, perimeter)

    def display(self, area, perimeter):
        print("Area:", area)  # Display the calculated area
        print("Perimeter:", perimeter)  # Display the calculated perimeter

if __name__ == "__main__":
    shapeObj = Shapes()  # Create an object of the Shapes class
    shapeObj.getDimensions()
