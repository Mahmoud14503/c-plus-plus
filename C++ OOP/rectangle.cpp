#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double lenght;

public:
    Rectangle() : width(1), lenght(1) {}
    Rectangle(double w, double len) : width(w), lenght(len) {}

    double getWidth()
    {
        return width;
    }

    void setWidth(double w)
    {
        width = w; 
    }

    double getlenght() 
    { 
        return lenght; 
    }
    
    void setlenght(double len) 
    { 
        lenght = len; 
    }

    double getArea() 
    { 
        return width * lenght; 
    }
};

int main()
{

    Rectangle s(4, 40);
    Rectangle s2(3.5, 35.9);

    cout << "Rectangle 1: Width = " << s.getWidth() << ", lenght = " << s.getlenght() << endl;
    cout << "Area of Rectangle 1: " << s.getArea() << endl;

    cout << "\nRectangle 2: Width = " << s2.getWidth() << ", lenght = " << s2.getlenght() << endl;
    cout << "Area of Rectangle 2: " << s2.getArea() << endl;

    return 0;
}
