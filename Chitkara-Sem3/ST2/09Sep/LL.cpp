#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLL{
    private:
    Node* head;
    Node* tail;

    public:
    DoublyLL(){
        head = tail = NULL;
    }

    void printLL(){
        if (head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop_front(){
        if (head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        // temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if (head == NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
};

int main(){
    DoublyLL l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);

    l1.pop_front();
    l1.pop_back();
    
    l1.printLL();

}
