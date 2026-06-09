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
    void search(string element, Node*& parent, Node*& currentNode) {
        currentNode = ROOT;
        parent = NULL;

        while (currentNode != NULL && currentNode->info != element) {
            parent = currentNode;
            if (element < currentNode->info) {
                currentNode = currentNode->leftchild;
            } else {
                currentNode = currentNode->rightchild;
            }
        }
    }

    void inorder(Node* ptr) {
        if (ROOT == NULL) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL) {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

    void preorder(Node* ptr) {
        if (ROOT == NULL) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL) {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }

    void postorder(Node* ptr) {
        if (ROOT == NULL) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL) {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }

    int main(){
        BinaryTree obj;

        while (true){
            
        }

    }
};