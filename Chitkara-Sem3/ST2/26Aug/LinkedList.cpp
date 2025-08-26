#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    private:
    Node* head;
    Node* tail;

    public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if (head==NULL){
            cout << "Linked List is empty " << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if (head==NULL){
            cout << "Linked List is empty " << endl;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete temp->next;
    }

    // void pop_back(){
    //     if (head==NULL){
    //         cout << "Linked List is empty " << endl;
    //         return;
    //     }
    //     Node* temp = head;
    //     while (temp->next != NULL){
    //         temp = temp->next;
    //     }
    //     temp->next = NULL;
    //     delete tail;
    //     tail = temp;
    // }

    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};



int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front('a');
    l1.push_front(true);
    l1.push_front('A');
    l1.push_back(99);
    l1.pop_front();
    l1.pop_back();
    l1.printLL();
}