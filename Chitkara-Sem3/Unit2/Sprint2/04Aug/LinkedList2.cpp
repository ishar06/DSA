#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head = NULL;
    }

    void insertAtLast(int value){
        Node* newNode = new Node(value);
        if (head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtBeginning(int value){
        Node* newNode = new Node(value);
        if (head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void insertAtPosition(int value, int pos){
        if (pos <= 0){
            cout << "Invalid Position" << endl;
            return;
        }
        Node* newNode = new Node(value);
        if (pos == 1){
            insertAtBeginning(value);
            return;
        }

        Node* temp = head;
        for (int i=1; i<pos-1 && temp->next != NULL; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {

    // Node* head = new Node(45);
    // Node* first = new Node(55);
    // Node* second = new Node(65);
    // head->next = first;
    // first->next = second;
    // Node* temp = head;
    // while (temp != NULL) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << "NULL" << endl;


    LinkedList list;
    list.insertAtBeginning(12);   
    list.insertAtLast(45);
    list.insertAtLast(67);
    list.insertAtPosition(13, 2);
    list.display();


}
