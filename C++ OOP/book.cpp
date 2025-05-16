#include <iostream>

using namespace std;

class Author {
    private:
        string name;
        string email;
        char gender;
    public:
        Author(){}
        Author(string name, string email, char gender){
            this -> name = name;
            this -> email = email;
            this -> gender = gender;
        }
};

class Book {
    private:
        string name;
        Author author;
        double price;
        int qty;

    public:
        Book(string name, Author author, double price, int qty){
            this -> name = name;
            this -> author = author;
            this -> price = price;
            this -> qty = qty; 
        }
        string getName(){
            return name;
        }
        Author getAuthor(){
            return author;
        }
        double getPrice(){
            return price;
        }
        void setPrice(double price){
            this -> price = price;
        } 
        int getQty(){
            return qty;
        }
        void setQty(int qty){
            this -> qty = qty;
        }
};

int main(){
    Author s("mahmoud", "mahmoud@gmail.com", 'M');
    Book s2("comic Book", s, 100, 1);
    
    return 0;
}