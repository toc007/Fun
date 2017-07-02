#include <iostream>
#include "Node.h"

using namespace std;

class Tree {
    public:
        Tree() { root = NULL; }
        Tree(Node* r) { root = r; }
        bool insert(int d);
        bool insert(Node* n);
        void remove(int d);
        Node* rfind(int d, Node* sub = root);
        Node* ifind(int d);

    private:
        Node* root;
};
