#include <iostream>
using namespace std;
#include <conio.h>

class ATM {
private:
    static float balance;
    float bankRevenue;
public:
    ATM():   /*balance(1000),*/ bankRevenue(0.01)
    {}
    void drawMenu() {
        cout << "*******************\n";
        cout << "1- Withdraw\n";
        cout << "2- Deposit\n";
        cout << "3- Balance Inquiry\n";
        cout << "4- Transfer\n";
        cout << "*******************\n";
    }
    static int getBalance() {
        return balance;
    }
    void setBalance(int x) {
        balance = x;
    }
    float getBankRevenue() {
        return bankRevenue;
    }
    ~ATM()
    {}
};
float ATM::balance = 1000;


class Withdraw {
private:
    ATM atm;
    float initialBalance;
public:
    Withdraw(): initialBalance(atm.getBalance())
    {}
    void drawMenu() {
    cout << "*******************\n";
    cout << "Select the amount: \n";
    cout << "1- 100\n";
    cout << "2- 200\n";
    cout << "3- 500\n";
    cout << "4- 1000\n";
    cout << "5- 2000\n";
    cout << "6- other\n";
    cout << "*******************\n";
    }
    void decreaseAmount(float x) {
        x = x + (x * atm.getBankRevenue());
        atm.setBalance(atm.getBalance() - x);
        cout << "Your currects balnce before withdraw is: " << getBalanceBeforWithdraw() << endl;
        cout << "Your currects balnce after withdraw is: " << getBalance() << endl;
    }
    int getBalanceBeforWithdraw() {
        int x = initialBalance;
        return x;
    }
    float getBalance() {
    return atm.getBalance();
    }
    ~Withdraw()
    {}
};
class Deposit {
private:
    ATM atm;
public:
    Deposit()
    {}
    void increseAmount(float x) {
        atm.setBalance(x + atm.getBalance());
    }
    ~Deposit()
    {}
};
class BalanceInquiry {
private:
    ATM atm;
public:
    BalanceInquiry()
    {}
    void drawReceiptMenu() {
        cout << "Do you want to print a receipt?\n";
        cout << "1- Yes\n";
        cout << "2- No (a friend of the environment)\n";
    }
    void showBalance() {
        cout << "Your Balance is: " << atm.getBalance() << endl;
    }
    ~BalanceInquiry()
    {}
};
class Transfer {
private:
    ATM atm;
public:
    Transfer()
    {}
    ~Transfer()
    {}
};


int main() {
    ATM atmObj;
    Withdraw withdraw;
    BalanceInquiry balanceInquiry;
    char key;
    do
    {
    atmObj.drawMenu();
    key = getch();
    switch (key)
    {
    case '1':
        withdraw.drawMenu();
        key = getch();
        switch (key)
        {
        case '1':
            withdraw.decreaseAmount(100);
            break;
        
        case '2':
            withdraw.decreaseAmount(200);
            break;
        
        case '3':
            withdraw.decreaseAmount(500);
            break;
        
        case '4':
            withdraw.decreaseAmount(1000);
            break;
        
        case '5':
            withdraw.decreaseAmount(2000);
            break;
        
        case '6':
            cout << "Enter the amount: ";
            int amount;
            cin >> amount;
            withdraw.decreaseAmount(amount);
            break;
        default:
            cout << "You have entered an invalid key, please try again\n";
            break;
        }
        break;
    case '2':
        /* code */
        break;
    case '3':
        balanceInquiry.showBalance();
        balanceInquiry.drawReceiptMenu();
        key = getch();
        switch (key)
        {
        case '1':
            cout << "The receipt is being printed\n";
            break;
        
        case '2':
            cout << "The receipt will not be printed\n";
            break;
        
        default:
            cout << "*******************\n";
            cout << "You have entered an invalid key, please try again\n";
            break;
        }
        break;
    case '4':
        /* code */
        break;
    case 27:
        break;
    default:
        cout << "You have entered an invalid key, please try again\n";
    }
    } while (key != 27);
}