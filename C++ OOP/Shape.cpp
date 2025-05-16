#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;

public:
    Shape() {}
    Shape(string color)
    {
        this->color = color;
    }
    string getColor()
    {
        return color;
    }
    void setColor(string color)
    {
        this->color = color;
    }
    ~Shape() {}
};

class Rectangle : public Shape
{
private:
    double width;
    double length;

public:
    Rectangle() {}
    Rectangle(string c, double w, double l)
    {
        color = c;
        width = w;
        length = l;
    }
    double getWidth()
    {
        return width;
    }
    double getLength()
    {
        return length;
    }
    void setWidth(double w)
    {
        width = w;
    }
    void setLength(double l)
    {
        length = l;
    }
    ~Rectangle() {}
    friend void print(Rectangle rect);
};

void print(Rectangle rect)
{
    cout << "Rectangle Color: " << rect.getColor() << ", Width: " << rect.getWidth() << ", Length: " << rect.getLength() << endl;
}

class Circle : public Shape
{
protected:
    double radius;

public:
    Circle() {}
    Circle(string c, double r)
    {
        color = c ;
        radius = r;
    }
    double getRadius()
    {
        return radius;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    ~Circle() {}
    double getArea()
    {
        return 3.14 * radius * radius;
    }
    friend void print(Circle circle);
};

void print(Circle circle)
{
    cout << "Circle Color: " << circle.getColor() << ", Radius: " << circle.getRadius() << ", Area: " << circle.getArea() << endl;
}

class Cylinder : public Circle
{
private:
    double height;

public:
    Cylinder() {}
    Cylinder(string c, double r, double h)
    {
        color = c;
        radius = r;
        height = h;
    }
    double getHeight()
    {
        return height;
    }
    void setHeight(double h)
    {
        height = h;
    }
    double getRadius()
    {
        return radius;
    }
    double getVolume()
    {
        return 3.14 * radius * radius * height;
    }
    ~Cylinder() {}
    friend void print(Cylinder cylinder);
};

void print(Cylinder cylinder)
{
    cout << "Cylinder Color: " << cylinder.getColor() << ", Height: " << cylinder.getHeight() << ", Volume: " << cylinder.getVolume() << endl;
}

int main()
{
    Rectangle rect("Blue", 5.0, 10.0);
    Circle circle("Red", 3.0);
    Cylinder cylinder("Green", 2.0, 4.0);

    cout << "Rectangle:" << endl;
    print(rect);
    cout << endl;

    cout << "Circle:" << endl;
    print(circle);
    cout << endl;

    cout << "Cylinder:" << endl;
    print(cylinder);
    cout << endl;

    return 0;
}