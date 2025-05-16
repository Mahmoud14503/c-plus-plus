#include <iostream>
using namespace std;

class Information
{
private:
    string name, address, phone;
    int age;

public:
    Information(string n, string ad, string p, int ag)
    {
        name = n;
        address = ad;
        phone = p;
        age = ag;
    }
    void setName(string n){
        name = n;
    }
    void setAddress(string ad){
        address = ad;
    }
    void setPhone(string p){
        phone = p;
    }
    void setAge(int ag){
        age = ag;
    }
    string getName(){
        return name;
    }
    string getAddress(){
        return address;
    }
    string getPhone(){
        return phone;
    }
    int getAge(){
        return age;
    }

};

int main() {
    Information myInfo("mahmoud", "10th of Ramadan City", "01210117687", 19);
    cout << "Information:\n";
    cout << "Name: " << myInfo.getName() << endl;
    cout << "Address: " << myInfo.getAddress() << endl;
    cout << "Age: " << myInfo.getAge() << endl;
    cout << "Phone Number: " << myInfo.getPhone() << endl;

    Information friend1("waleed", "salhia country", "+01 098 7645", 20);
    cout << "\nFriend 1's Information:\n";
    cout << "Name: " << friend1.getName() << endl;
    cout << "Address: " << friend1.getAddress() << endl;
    cout << "Age: " << friend1.getAge() << endl;
    cout << "Phone Number: " << friend1.getPhone() << endl;

    Information friend2("Ali", "10th of Ramadan City", "010258147", 21);
    cout << "\nFriend 2's Information:\n";
    cout << "Name: " << friend2.getName() << endl;
    cout << "Address: " << friend2.getAddress() << endl;
    cout << "Age: " << friend2.getAge() << endl;
    cout << "Phone Number: " << friend2.getPhone() << endl;

    return 0;
}