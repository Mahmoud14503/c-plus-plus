#include <iostream>
using namespace std;

class Point2D
{
protected:
    int x;
    int y;

public:
    Point2D() {}
    Point2D(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int getX()
    {
        return x;
    }
    void setX(int x)
    {
        this->x = x;
    }

    int getY()
    {
        return y;
    }
    void setY(int y)
    {
        this->y = y;
    }

    ~Point2D() {}
};

class Point3D : public Point2D
{
private:
    int z;

public:
    Point3D() {}
    Point3D(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    int getZ()
    {
        return z;
    }
    void setZ(int z)
    {
        this->z = z;
    }

    ~Point3D() {}
};

int main()
{
    Point2D point2D(2, 3);
    cout << "Point2D: (" << point2D.getX() << ", " << point2D.getY() << ")" << endl;

    Point3D point3D(4, 5, 6);
    cout << "Point3D: (" << point3D.getX() << ", " << point3D.getY() << ", " << point3D.getZ() << ")" << endl;

    return 0;
}
