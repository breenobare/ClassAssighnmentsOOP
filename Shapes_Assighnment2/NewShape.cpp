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
    public:
    void setDimensions(){
        takeDimensions();
    }
    float getArea(){
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
