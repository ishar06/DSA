/*
Counting the number of Nodes in a Linked List
*/

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main(){

    Node* head = new Node();
    head->data = 45;
    head->next = NULL;

    Node* second = new Node();
    second->data = 56;
    second->next = NULL;

    Node* third = new Node();
    third->data = 65;
    third->next = NULL;

    Node* fourth = new Node();
    fourth->data = 75;
    fourth->next = NULL;

    Node* fifth = new Node();
    fifth->data = 85;
    fifth->next = NULL;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << "NULL" << endl;
    cout << "Count : " << count+1 << endl;


}