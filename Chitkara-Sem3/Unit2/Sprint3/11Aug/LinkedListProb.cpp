#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        
        Node(int value) {
            this->data = value;
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

    void deleteAtBeginning(){
        if (head == NULL){
            cout << "Invalid, List Empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtLast(){
        if (head == NULL){
            cout << "Invalid, List Empty!" << endl;
            return;
        }
        if (head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete temp->next;
        
    }

    void deleteAtPosition(int pos) {
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (pos == 1) {
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL || temp->next == NULL) {
                cout << "Invalid Position" << endl;
                return;
            }
            temp = temp->next;
        }

        Node* node = temp->next;
        if (node == NULL) {
            cout << "Invalid Position" << endl;
            return;
        }

        temp->next = node->next;
        delete node;
    }

    void display(){
        if (head == NULL){
            return;
        }
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverseLinkedList() {
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while (current != NULL) {
            next = current->next;  
            current->next = prev;  
            prev = current;       
            current = next;       
        }
        head = prev;
        display(); 
    }

    void middleElement(){
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data << endl;
    }
};

int main() {

    LinkedList list;
    list.insertAtBeginning(12);   
    list.insertAtLast(45);
    list.insertAtLast(67);
    // list.insertAtPosition(13, 2);
    // list.deleteAtBeginning();
    // list.deleteAtLast();
    // list.deleteAtPosition(2);



    list.display();
    // list.reverseLinkedList();
    list.middleElement();


}
