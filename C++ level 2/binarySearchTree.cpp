#include <iostream>
using namespace std;

class Node {
private:
        float data;
        Node* left;
        Node* right;
public:
    Node(): data(0), left(NULL), right(NULL)
    {}
    friend class Tree;
};

class Tree {
private:
    Node* root;
public:
    Tree(): root(NULL)
    {}
    Node insert(float x) {
        
    }
};


int main() {

}