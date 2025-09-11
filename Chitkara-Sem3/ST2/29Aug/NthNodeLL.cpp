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

    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printLL(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int findNthFromLast(int k) {
        int n = 0;
        Node* temp = head;
        while (temp) {
            n++;
            temp = temp->next;
        }
        if (k > n || k <= 0) {
            cout << "Invalid k" << endl;
            return -1;
        }
        int index = n - k + 1;
        Node* temp2 = head;
        for (int i = 1; i < index; i++) {
            temp2 = temp2->next;
        }
        return temp2->data;
    }

    int NthFromEnd(int N){
        Node* ref_ptr = head;
        Node* main_ptr = head;
        for (int i=1; i<N; i++){
            ref_ptr = ref_ptr->next;
        }
        if (ref_ptr == NULL){
            return -1;
        }
        while (ref_ptr->next != NULL){
            ref_ptr = ref_ptr->next;
            main_ptr = main_ptr->next;
        }
        return main_ptr->data;
    }



};

int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);

    l1.printLL();
    cout << l1.findNthFromLast(2) << endl;
    cout << l1.NthFromEnd(3) << endl;
    
}
