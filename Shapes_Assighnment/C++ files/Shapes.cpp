#include<iostream>
using namespace std;

class Shapes                        //Defining the shape class
{
public:
    void getDimensions() //getting length and width from user
    {
        int length, width;
        cout<<"Enter the length"<< endl;
        cin>>length;
        cout<<"Enter the width"<< endl;
        cin>>width;
        compute(length, width); //calling the compute function
    }
    void compute(int length, int width) //function to calculate area and perimeter
    {
        int area, perimeter;
        area = length*width;
        perimeter = 2*(length+width);
        display(area, perimeter); //Calling the display function
    }
    void display(int area, int perimeter) //Displaying area and perimeter values
    {
        cout<<"Area: " << area<< endl;
        cout<<"Perimeter: " << perimeter<< endl;
    }
};

int main()
{
    Shapes shapeobj; //creating "shapesobj" object
    shapeobj.getDimensions(); //calling the getDimensions function
    return 0;
}
