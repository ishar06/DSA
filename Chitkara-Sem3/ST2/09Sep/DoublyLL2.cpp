#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
      Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insertNode(int value) {
        Node* newNode = new Node(value);
          Node* last=head;
      newNode->next=nullptr;
        if (!head) {
            head = newNode;
          newNode->next=nullptr;
          newNode->prev=nullptr;
        } else {
            while (last->next) {
                last = last->next;
            }
            last->next = newNode;
            newNode->prev=last;
        }
    }

    void swapNodes(int x, int y);
    void printList();
};

void LinkedList::printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void LinkedList::swapNodes(int x, int y) {
    if (x == y) {
        return;
    }

    Node *nodeX = nullptr, *nodeY = nullptr;
    for (Node* curr = head; curr != nullptr; curr = curr->next) {
        if (curr->data == x) nodeX = curr;
        if (curr->data == y) nodeY = curr;
    }

    if (nodeX == nullptr || nodeY == nullptr) {
        return;
    }

    if (nodeX->next == nodeY) { // nodeX is just before nodeY
        Node* prevX = nodeX->prev;
        Node* nextY = nodeY->next;

        if (prevX) prevX->next = nodeY;
        nodeY->prev = prevX;
        
        nodeY->next = nodeX;
        nodeX->prev = nodeY;
        
        nodeX->next = nextY;
        if (nextY) nextY->prev = nodeX;

    } else if (nodeY->next == nodeX) { // nodeY is just before nodeX
        Node* prevY = nodeY->prev;
        Node* nextX = nodeX->next;

        if (prevY) prevY->next = nodeX;
        nodeX->prev = prevY;

        nodeX->next = nodeY;
        nodeY->prev = nodeX;

        nodeY->next = nextX;
        if (nextX) nextX->prev = nodeY;

    } else { // Nodes are not adjacent
        Node* prevX = nodeX->prev;
        Node* nextX = nodeX->next;
        Node* prevY = nodeY->prev;
        Node* nextY = nodeY->next;

        if (prevX) prevX->next = nodeY;
        nodeY->prev = prevX;
        if (nextX) nextX->prev = nodeY;
        nodeY->next = nextX;

        if (prevY) prevY->next = nodeX;
        nodeX->prev = prevY;
        if (nextY) nextY->prev = nodeX;
        nodeX->next = nextY;
    }

    if (head == nodeX) {
        head = nodeY;
    } else if (head == nodeY) {
        head = nodeX;
    }
}

