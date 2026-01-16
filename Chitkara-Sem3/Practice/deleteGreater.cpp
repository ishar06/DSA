#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* deleteGreater(Node* head, int X) {
    while (head && head->data > X) head = head->next;
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->next->data > X) {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
        }
    }
    return head;
}

int main() {
    int N, X;
    cin >> N;
    cin >> X;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    head = deleteGreater(head, X);

    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
