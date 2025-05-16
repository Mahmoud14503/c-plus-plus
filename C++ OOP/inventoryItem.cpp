#include <iostream>
using namespace std;

class InventoryItem
{
private:
    string description;
    double cost;
    int units;

public:
    InventoryItem() : description(""), cost(1), units(1) {}

    InventoryItem(string desc) : description(desc) {}

    InventoryItem(string desc, double c, int u) : description(desc), cost(c), units(u) {}

    void setDescription(string d)
    {
        description = d;
    }

    void setCost(double c)
    {
        cost = c;
    }

    void setUnits(int u)
    {
        units = u;
    }

    string getDescription()
    {
        return description;
    }

    double getCost()
    {
        return cost;
    }

    int getUnits()
    {
        return units;
    }
};

int main()
{
    InventoryItem s("nvkfnj", 500, 1);
    cout << s.getDescription() << endl;
    cout << s.getCost() << endl;
    cout << s.getUnits() << endl;

    return 0;
}