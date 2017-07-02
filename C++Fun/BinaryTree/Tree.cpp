#include <iostream>
#include "Tree.h"

using namespace std;

Node* Tree::rfind(int d, Node* sub) {
    if(!root) return NULL;
    int rootD = root->getData();
    if(rootD == d) return root;

    if(d < rootD) return rfind(d, root->getLeftChild());
    else return rfind(d, root->getRightChild());
}

Node* Tree::ifind(int d) {
    if(!root) return NULL;
    Node* it = root;
    int itD = it->getData();
    while(it && itD != d) {
        if(itD < d)
            it = it->getLeftChild();
        else
            it = it->getRightChild();
        itD = it->getData();
    }

    if(itD == d) return it;
    else return NULL;
}

bool Tree::insert(int d) {
    if(!this->find(d))
        return false;
}
