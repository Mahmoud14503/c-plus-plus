#include <iostream>
using namespace std;

class Customer{
    private:
        int id;
        string name;
        int discount;
    public:
        Customer(){}
        Customer(int id, string name, int discount){
            this -> id = id;
            this -> name = name;
            this -> discount = discount;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        int getDiscount(){
            return discount;
        }
        void setDiscount(int discount){
            this -> discount = discount;
        }
};

class Invoice{
    private:
        int ID;
        Customer customer;
        double amount;
    public:
        Invoice(){}
        Invoice(int ID, Customer customer, double amount){
            this -> ID = ID;
            this -> customer = customer;
            this -> amount = amount;
        }
        int getID(){
            return ID;
        }
        Customer getCustomer(){
            return customer;
        }
        void setCustomer(Customer customer){
            this -> customer = customer;
        }
        double getAmount(){
            return amount;
        }
        void setAmount(double amount){
            this -> amount = amount;
        }
        int getCustomerid(){
            return customer.getId();
        }
        string getCustomerName(){
            return customer.getName();
        }
        int getCustomerDiscount(){
            return customer.getDiscount();
        }
        double getAmountAfterDiscount(){
            return amount - (customer.getDiscount() * amount / 100);
        }
};

int main(){
    Customer s (1, "mahmoud", 50);
    Invoice s2 (1, s, 1000);

    cout << "Invoice ID: " << s2.getID() << endl;
    cout << "Customer ID: " << s2.getCustomerid() << endl;
    cout << "Customer Name: " << s2.getCustomerName() << endl;
    cout << "Customer Discount: " << s2.getCustomerDiscount() << "%" << endl;
    cout << "Amount before discount: $" << s2.getAmount() << endl;
    cout << "Amount after discount: $" << s2.getAmountAfterDiscount() << endl;

    return 0;
}
