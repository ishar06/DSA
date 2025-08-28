/* 

Checking is a LL is Palindrome 
============================== 
    -- Find the length of the LL 
    -- Move the slow pointer to the middle using slow-fast logic 
    -- Reverse the second half and compare it with the first 
    -- If same then the LL is Palidrome, this method is more fast and memory efficient 
    
*/


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

    Node *reverse(Node* head){
        if (!head || !head->next){
            return head;
        }
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while (curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isIdentical(Node* n1, Node* n2){
        while (n1 && n2){
            if (n1->data != n2->data){
                return false;
            }
            n1 = n1->next;
            n2 = n2->next;
        }
        return true;
    }

    bool isPalindrome(){
        if (!head || !head->next){
            return true;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* secondHalf = reverse(slow->next);
        bool res = isIdentical(head, secondHalf);
        return res;
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

    if (l1.isPalindrome()){
        cout << "Palindrome" << endl;
    } else {
        cout << "NOT a Palindrome" << endl;
    }
}
