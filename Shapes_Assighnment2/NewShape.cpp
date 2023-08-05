#include<iostream>
using namespace std;

class Shapes{
private:
    float perimeter, area, length, width;
protected:
    void takeDimensions(){
        cout<<"Enter Length: ";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;
    }
    float findArea(){
        area = length * width;
        return area;
    }
    float findPerimeter(){
        perimeter = 2*(length+width);
        return perimeter;
    }
};
class Rectangle : public Shapes{
    //I created two getter functions and set them to public so they can be accessed from outside the class
    public:
    void setDimensions(){ //get dimmensions
        takeDimensions();
    }
    float getArea(){ //get area
        return findArea();
    }

};

int main(){
    Rectangle rectobj;
    rectobj.setDimensions();
    float return_area = rectobj.getArea();

    cout<<"Rectangle area is: " << return_area;
    return 0;
}
