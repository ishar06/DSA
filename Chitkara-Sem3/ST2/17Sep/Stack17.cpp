/*
Important Leetcode questions using Stacks
Valid Parenthesis
Baseball Game
Next Greater Element - I
*/


#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class LLStack{
    private:
    Node* top;
    int size;

    public:
    LLStack(){
        top = NULL;
        size = 0;
    }

    ~LLStack(){
        while(!isEmpty()){
            int poppedVal = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        size++;
    }

    int pop(){
        if (top->next == NULL){
            cout << "Stack is empty." << endl;
            return -1;
        }
        int item = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return item;
    }

    int peek(){
        if(top == NULL){
            cout << "Stack is empty." << endl;
            return -1;
        }
        int item = top->data;
        return item;
    }

    bool isEmpty(){
        return (top==NULL);
    }

    int getSize(){
        return size;
    }

    void display(){
        if(top == NULL){
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


};

int main(){

    LLStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.display();

}