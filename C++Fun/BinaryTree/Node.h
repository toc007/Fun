#include <iostream>

using namespace std;

class Node {
    public:
        Node(int d, Node* lc = NULL, Node* rc = NULL) {
            data = d;
            left = lc;
            right = rc;
        }

        int getData() { return data; }
        Node* getLeftChild() { return left; }
        Node* getRightChild() { return right; }

        void setData(int d) { data = d; }
        void setLeftChild(Node* lc) { left = lc; }
        void setRightChild(Node* rc) { right = rc; }

    private:
        int data;
        Node* left;
        Node* right;
};
