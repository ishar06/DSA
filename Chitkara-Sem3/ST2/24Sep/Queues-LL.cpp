#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

#define maxSize 100
class LLQueue{
    private:
    int Count = 0;
    Node* head;
    Node* tail;

    public:
    LLQueue(){
        head = tail = NULL;
    }

    void enqueue(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            Count++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        Count++;
    }

    void dequeue(){
        if (head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        Count--;
    }

    bool isEmpty(){
       return (Count==0);
    }
    
    bool isFull(){
        return (Count==maxSize);
    }


    void printQueue(){
        if (head == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    LLQueue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    cout << queue.isFull() << endl;

    return 0;
}