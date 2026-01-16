#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int findNode(int n) {
        if (head == NULL) return -1;

        Node* len = head;
        int count = 0;

        while (len) {
            len = len->next;
            count++;
        }

        if (n > count || n <= 0) return -1;

        Node* temp = head;
        for (int i = 1; i < n; i++) {
            temp = temp->next;
        }

        return temp->data;
    }

    int findNthLast(int n){
        if (head == NULL) return -1;
        if (head->next == NULL) return head->data;
        Node* a = head;
        int len = 0;
        while (a) {
            a = a->next;
            len++;
        }
        if (n > len || n <= 0) return;
        int v = len - n + 1;

        Node* temp = head;

        for(int i=1;i<v;i++){
            temp = temp->next;
        }
        return temp->data;
       
    }

    void FindNodeFromEndUsingPointer(int N){

        Node* len = head;
        int count = 0;

        while (len) {
            len = len->next;
            count++;
        }

        if (N > count || N <= 0) return;
        Node* ref_ptr = head;
        Node* main_ptr = head;

        for(int i=1;i<N;i++){
            ref_ptr = ref_ptr->next;

            if(ref_ptr==NULL){
                return;
            }
        }

        while(ref_ptr->next!=NULL){
            ref_ptr = ref_ptr->next;
            main_ptr = main_ptr->next;
        }

        cout<<main_ptr->data;


    }

    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    cout << l.findNthLast(3) << endl;
    
    return 0;
}