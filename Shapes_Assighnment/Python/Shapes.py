class Shapes:
    def __init__(self):
        self.length = 0  # Initialize length to 0
        self.width = 0  # Initialize width to 0
        self.area = 0  # Initialize area to 0
        self.perimeter = 0  # Initialize perimeter to 0

    def getDimensions(self):
        self.length = int(input("Enter the length: "))  # Prompt user to enter length and store in instance variable
        self.width = int(input("Enter the width: "))  # Prompt user to enter width and store in instance variable

    def compute(self):
        self.area = self.length * self.width  # Compute area by multiplying length and width
        self.perimeter = 2 * (self.length + self.width)  # Compute perimeter using the formula

    def display(self):
        print("Area:", self.area)  # Display the calculated area
        print("Perimeter:", self.perimeter)  # Display the calculated perimeter

if __name__ == "__main__":
    shapeObj = Shapes()  # Create an object of the Shapes class
    shapeObj.getDimensions()  # Prompt the user to enter dimensions
    shapeObj.compute()  # Compute the area and perimeter
    shapeObj.display()  # Display the results
