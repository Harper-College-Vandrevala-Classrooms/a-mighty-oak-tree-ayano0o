#include "oak.hpp"

using namespace std;


int main() {

    Squirrel squirrelOne("Cheeks");
    Squirrel squirrelTwo("Squeaks");
    Squirrel squirrelThree("Mr.fluffy butt");

    Node node_one(&squirrelOne);
    Node node_two(&squirrelTwo);
    Node node_three(&squirrelThree);

    node_one.set_left(&node_two);
    node_one.set_right(&node_three);

    BinaryTree tree(&node_one);

    cout << "In-order traversal:" << endl;
    tree.traverse_in_order(tree.get_root());

    Node* left_child = node_one.left();
    Node* right_child = node_one.right();

    cout << "Left child of the root: " << left_child->get_squirrel()->get_name() << endl;
    cout << "Right child of the root: " << right_child->get_squirrel()->get_name() << endl;

    return 0;
}
