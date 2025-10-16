/* 

Merging two Linked List:
=========================

Problem Statement: 
-----------------

--We are given two linked lists, both are already sorted in ascending order.
--We need to merge them into a single sorted linked list.

*/


#include <iostream>
#include <vector>
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

    Node* mergeTwoSortedLL(Node* head1, Node* head2){
        if (head1 == NULL){
            return head2;
        }
        if (head2 == NULL){
            return head1;
        }
        Node* head;
        Node* tail;

        if (head1->data < head2->data){
            head = tail = head1;
            head1 = head1->next;
        }else{
            head = tail = head2;
            head2 = head2->next;
        }

        while (head1 != NULL && head2 != NULL){
            if (head1->data < head2->data){
                tail->next = head1;
                head1 = head1->next;
            }else{
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
        if (head1 != NULL){
            tail->next = head1;
        }else{
            tail->next = head2;
        }
        return head;
    }

    



    Node* mergeTwoLists(Node* head1, Node* head2){
        if (head1 == NULL) return head2;
        if (head2 == NULL) return head1;

        if (head1->data < head2->data){
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        }else{
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }

    Node* findMid(Node* head){
        if (head == NULL || head->next == NULL){
            return head;
        }
        Node* slow = head;
        Node* fast = head;;

        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* mergeSort(Node* head){
        if (head == NULL || head->next == NULL) return head;

        Node* mid = findMid(head);
        Node* second = mid->next;
        mid->next = NULL;

        Node* left = mergeSort(head);
        Node* right = mergeSort(second);

        return mergeTwoLists(left, right);
    }

    

   

};

int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(1);

    l1.printLL();

    
}



int loopInList(Node* head) {
    if (head == nullptr || head->next == nullptr) return 0;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            int count = 1;
            Node* temp = slow->next;
            while (temp != slow) {
                temp = temp->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}