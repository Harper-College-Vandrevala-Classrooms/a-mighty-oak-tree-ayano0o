#include <iostream>
#include <string>

using namespace std;

class Squirrel {

private:
    string name;

public:
    Squirrel(string name) : name(name) {}

    string get_name() {
        return this->name;
    }
};

class Node {

private:
    Squirrel* squirrel; 
    Node* left_child;  
    Node* right_child;  

public:
    
    Node(Squirrel* squirrel) : squirrel(squirrel), left_child(nullptr), right_child(nullptr) {}

    void set_left(Node* left) {
        left_child = left;
    }

    void set_right(Node* right) {
        right_child = right;
    }

    Node* left() {
        return left_child;
    }

    Node* right() {
        return right_child;
    }

    Squirrel* get_squirrel() {
        return squirrel;
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree(Node* root) : root(root) {}

    Node* get_root() {
        return root;
    }

    void traverse_in_order(Node* node) {
        if (node == nullptr) {
            return;
        }
        traverse_in_order(node->left());
        cout << "Squirrel: " << node->get_squirrel()->get_name() << endl;
        traverse_in_order(node->right());
    }
};
