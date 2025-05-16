#include <iostream>
using namespace std;

class Customer
{
    private:
        int id;
        string name;
        char gender;
    public:
        Customer(){}
        Customer(int id, string name, char gender){
            this -> id = id;
            this -> name = name;
            this -> gender = gender;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        char getGender(){
            return gender;
        }
};

class Account{
    private:
        int id;
        Customer customer;
        double balance;
    public:
        Account(int id, Customer customer, double balance){
            this -> id = id;
            this -> customer = customer;
            this -> balance = balance;
        }
        Account(int id, Customer customer){
            this -> id = id;
            this -> customer = customer;
        }
        int getId() {
            return id;
        }
        Customer getCustomer(){ 
            return customer; 
        }
        double getBalance(){ 
            return balance; 
        }
        void setBalance(double B){ 
            balance = B; 
        }
        string getCustomerName(){
            return customer.getName();
        }
        double deposit(double amount){
            if (amount > 0) {
                balance += amount;
            }
            return balance;
        }

        double withdraw(double amount){
            if (amount > 0 && amount <= balance) {
                balance -= amount;
            }else if(amount >= balance){
                cout << "amount withdrawn exceeds the current balance!\n";
            }
            return balance;
        }
};

int main() {
    Customer s(1, "mahmoud", 'M');

    Account s2(1, s, 1000);

    s2.deposit(1000);
    cout << "Balance after deposit: " << s2.getBalance() << endl;
    s2.withdraw(2001);
    cout << "Balance after withdrawal: " << s2.getBalance() << endl;

    return 0;
}
