#include <iostream>
#include <vector>
#include <algorithm>
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

    void sortLL(){
        vector<int> arr;
        Node* temp = head;
        while (temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        temp = head;

        for (int i=0; temp!=NULL; i++){
            temp->data = arr[i];
            temp = temp->next;
        }
    }

    Node* getMiddle(Node* head){
        if (!head) return head;
        Node* slow = head;
        Node* fast = slow->next;

        while (fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

};

int main() {
    LinkedList list;
    list.insertAtLast(5);
    list.insertAtLast(1);
    list.insertAtLast(3);
    list.insertAtLast(2);
    list.insertAtLast(4);

    cout << "Original List: ";
    list.display();

    cout << "Sorted List: ";
    list.sortLL();
    list.display();
}

