#include<iostream>
using namespace std;

class Shapes                        //Defining the shape class
{
private:
    int length, width, area, perimeter;
public:
    void getDimensions()
    {
        cout<<"Enter the length"<< endl;
        cin>>length;
        cout<<"Enter the width"<< endl;
        cin>>width;
    }
    void compute()
    {
        //Area
        area = length*width;
        perimeter = 2*(length+width);
    }
    void display()
    {
        cout<<"Area: " << area<< endl;
        cout<<"Perimeter: " << perimeter<< endl;
    }
};

int main()
{
    Shapes shapeobj;
    shapeobj.getDimensions();
    shapeobj.compute();
    shapeobj.display();
    return 0;
}
