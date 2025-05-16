#include <iostream>
#include <fstream>
using namespace std;

class Company {
private:
    int ID, numOfChildren, salary;
    string name;
    string* ptrChildren;
public:
    Company(): ID(0), numOfChildren(0), salary(0), name("unkown")
    {}
    void setID(int x) {
        ID = x;
    }
    void setNumOfChildren(int x) {
        numOfChildren = x;
    }
    void setSalary(int x) {
        salary = x;
    }
    void setName(string x) {
        name = x;
    }
    void setNameOfChildren(string x[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Child #" << i + 1 << ": ";
            cin >> x[i];
        }
    }
    void setPtrChildren(string* x) {
        ptrChildren = x;
    }
    int getID() {
        return ID;
    }
    int getNumOfChildren() {
        return numOfChildren;
    }
    int getSalary() {
        return salary;
    }
    string getName() {
        return name;
    }
    string* getPtrChildren() {
        return ptrChildren;
    }
    
    void printChildren(string* arr, int size) {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
    
    void printChildrenInTxt(string* arr, int size) {
        ofstream ob;
        ob.open("d:/Company.txt", ios:: out | ios::ate | ios::in);
        for (int i = 0; i < size; i++)
            ob << arr[i] << " ";
        ob.close();
    }
    void print(int objectIndex) {
        cout << "\n\n========= Emp #" << objectIndex + 1 << " =========\n";
        cout << "ID=" << ID << "\t" << "Name=" << name << "\t" << "Salary=" << salary << endl;
        cout << "NumOfChildren=" << numOfChildren << ", children=[";
        printChildren(ptrChildren, numOfChildren);
        cout << "]";
    }
    void printInTxt(int objectIndex) {
        ofstream ob;
        ob.open("d:/Company.txt", ios:: out | ios::ate | ios::in);
        ob << "\n\n========= Emp #" << objectIndex + 1 << " =========\n";
        ob << "ID=" << ID << "\t" << "Name=" << name << "\t" << "Salary=" << salary << endl;
        ob << "NumOfChildren=" << numOfChildren << ", children=[";
        ob.close();
        printChildrenInTxt(ptrChildren, numOfChildren);
        ob.open("d:/Company.txt", ios:: out | ios::ate | ios::in);
        ob << "]";
        ob.close();
    }
    ~Company()
    {}
};



int main()
{
    cout << "Enter the number of employees: ";
    int SIZE;
    cin >> SIZE;
    Company* ptr = new Company [SIZE];

    for (int i = 0; i < SIZE; i++){
        cout << "====== Emp #" << i+1 << "======\n";
        int x; string str;

        cout << "Enter ID: ";
        cin >> x;
        ptr[i].setID(x);

        cout << "Enter Salary: "; 
        cin >> x;
        ptr[i].setSalary(x);

        cout << "Enter Name: "; 
        cin >> str; 
        ptr[i].setName(str);

        cout << "Enter Num of Children: "; 
        cin >> x; 
        ptr[i].setNumOfChildren(x);

        ptr[i].setPtrChildren(new string [ptr[i].getNumOfChildren()]);
        ptr[i].setNameOfChildren(ptr[i].getPtrChildren(), ptr[i].getNumOfChildren());
    }
    cout << "\n===============Show Employees Data===============";
    for (int i = 0; i < SIZE; i++)
        ptr[i].print(i);

    ofstream ob;
    ob.open("d:/Company.txt");
    ob << "\n===============Show Employees Data===============";
    ob.close();

    for (int i = 0; i < SIZE; i++)
        ptr[i].printInTxt(i);

    delete[] ptr;
    return 0;
}
