#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int id;
    string name;
    double balance;

public:
    Account() : id(0), name(""), balance(0.0) {}
    Account(double B) : balance(B) {}
    Account(int I, string N, double B): id(I), name(N), balance(B) {}
    int getId() {
        return id;
    }
    void setId(int I) { 
        id = I; 
    }

    string getName(){ 
        return name; 
    }
    void setName(string N){ 
        name = N; 
    }

    double getBalance(){ 
        return balance; 
    }
    void setBalance(double B){ 
        balance = B; 
    }

    double withdraw(double amount){
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
        return balance;
    }

    double deposit(double amount){
        if (amount > 0) {
            balance += amount;
        }
        return balance;
    }
};

int main() {
    Account s(1, "ahmed", 1000);
    s.deposit(1000);
    cout << "Balance after deposit: " << s.getBalance() << endl;
    s.withdraw(500);
    cout << "Balance after withdraw: " << s.getBalance() << endl;
    return 0;
}
