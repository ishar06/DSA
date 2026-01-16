#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    private:
    Node* head;
    Node* tail;

    public:
    LinkedList(){
        head = tail = NULL;
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
        if (head == NULL) return;
        Node* temp = head;
        temp->next = NULL;
        head = head->next;
        delete temp;
    }

    void pop_back(){
        if (head == NULL) return;
        if (head->next == NULL){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;
    }
};


int main(){


    return 0;
}