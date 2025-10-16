#include <iostream>
#include <algorithm>
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
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
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

    void sortLL(){
        if (head == NULL || head->next == NULL) return;

        int* arr = toArray();
        sort(arr, arr+size);

        Node* curr = head;
        int i = 0;
        while (curr != NULL){
            curr->data = arr[i++];
            curr = curr->next;
        }
        delete[] arr;
    }

    void insertSorted(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }
        else if (val <= head->data){
            newNode->next = head;
            head = newNode;
        }
        // If value is not <= head and is somewhere in between
        else{
            Node* curr = head;
            while (curr->next != NULL && curr->next->data < val){
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;

            //Update tail if newNode is at last
            if (newNode->next = NULL){
                tail = newNode;
            }
        }
        size++;
    }





};



int main(){
    
}