#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i , Node* l , Node* r) {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree{
    public:
    Node* ROOT;
    BinaryTree() {
        ROOT = NULL;
    }

    void insert(string element) {
        Node* newNode = new Node(element, NULL, NULL);
        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node* parent = NULL;
        Node* currentNode = ROOT;

        search(element, parent, currentNode);
        if (parent == NULL) {
            ROOT = newNode;
            return;
        } else if (element < parent->info) {
            parent->leftchild = newNode;
        } else {
            parent->rightchild = newNode;
        }


    }
};