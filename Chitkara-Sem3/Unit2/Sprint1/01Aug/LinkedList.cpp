#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node (int data){
//             this->data = data;
//             this->next = NULL;
//         }
// };

int main(){

    // Using struct Node
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

    

    // here, the above two nodes are not connected [45, NULL]  [56, NULL]

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;




    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;



}