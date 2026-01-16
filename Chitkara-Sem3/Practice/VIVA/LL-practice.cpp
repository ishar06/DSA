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
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if (head == NULL) return;
        Node* temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete temp;
    }

    void printLL(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverseLL(){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while (curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    int findMid(){
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }

    int getSize(){
        int size = 0;
        Node* temp = head;
        while (temp !=  NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }

    bool isPalindrome(){
        if (head == NULL || head->next == NULL) return true;
        int size = getSize();
        int* arr = new int[size];
        Node* temp = head;
        int k = 0;

        while (temp != NULL){
            arr[k++] = temp->data;
            temp = temp->next;
        }

        int i=0;
        int j=size-1;
        while (i < j){
            if (arr[i] != arr[j]){
                delete[] arr;
                return false;
            }
        }
        delete[] arr;
        return true;
    }
};

int main(){

    LinkedList L;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    L.push_back(40);
    L.push_back(50);
    L.printLL();
    L.reverseLL();
    L.printLL();

    return 0;
}