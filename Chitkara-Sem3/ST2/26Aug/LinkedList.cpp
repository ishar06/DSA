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
    int size;

    public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;  
        }else{
            newNode->next = head;
            head = newNode;
        }
        size++;
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
        if (head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }  
        size--;
    }

    void pop_back(){
        if (head == NULL) return;
        if (head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            while (temp->next->next != NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            delete temp;
        }
        size--;
    }

    int getIndexOf(int val){
        int index = 0;
        Node* curr = head;
        while (curr != NULL){
            if (curr->data == val){
                return index;
            }
            curr = curr->next;
            index++;
        }
        return -1;
    }

    bool contains(int val){
        return getIndexOf(val) != -1;
    }

    Node* getPreviousNode(Node* node){
        Node* curr = head;
        while (curr != NULL && curr->next != node){
            curr = curr->next;
        }
        return curr;
    }

    void insert(int val, int index){
        if (index < 0 || index > size) return;
        if (index == 0){
            push_front(val);
            return;
        }
        if (index == size){
            push_back(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i=0; i < index-1; i++){
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }

    void deleteAt(int index){
        if (index < 0 || index > size) return;
        if (index == 0){
            pop_front();
            return;
        }
        if (index == size){
            pop_back();
            return;
        }
        Node* curr = head;
        for (int i=0; i<index-1; i++){
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        size--;
    }

    int* toArray(){
        int* arr = new int[size];
        Node* curr = head;
        int i = 0;
        while (curr != NULL){
            arr[i++] = curr->data;
            curr = curr->next;
        }
        return arr;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return (size == 0);
    }

    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
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