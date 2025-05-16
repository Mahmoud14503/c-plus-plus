#include <iostream>
using namespace std;

class Circle
{
protected:
    string color;
    double radius;

public:
    Circle() {}
    Circle(string color, double radius)
    {
        this->color = color;
        this->radius = radius;
    }
    double getRadius(){
        return radius;
    }
    void setRadius(double r){
        radius = r;
    }
    virtual double getArea(){
        return 3.14 * radius * radius;
    }
    virtual void print(){
        cout << "the color is: " << color << endl << "the radius is: " << radius << endl << "the area is: " << getArea() << endl;
    }
    ~Circle(){}
};

class Cylinder : public Circle
{
    private:
        double height;

    public:
        Cylinder() {}
        Cylinder(string color, double radius, double height) 
        {
            this->color = color;
            this->radius = radius;
            this->height = height;
        }
        double getHeight()
        {
            return height;
        }
        void setHeight(double h)
        {
            height = h;
        }
        double getArea() 
        {
            return (2 * 3.14 * getRadius() * getRadius()) + (height * (2 * 3.14 * getRadius()));
        }
        void print()
        {
            cout << "the radius is: " << getRadius() << endl << "the height is: " << height << endl << "the Area is: " << getArea() << endl;
        }
        ~Cylinder(){}
};

int main()
{
    Circle *CI1 = new Circle("Red", 5.0);
    CI1->print();    

    cout<<"----------------------\n";

    Cylinder *CY = new Cylinder("Blue", 3.0, 7.0);
    CY->print();
    cout << endl;

    delete CI1;
    delete CY;

    return 0;
}