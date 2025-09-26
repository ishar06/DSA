#include <iostream>
using namespace std;

class Deque{
    private:
    int front;
    int rear;
    int size;
    int* arr;

    public:
    Deque(int n){
        front = rear = -1;
        size = n;
        arr = new int[size];
    }

    void push_front(int val){
        if (isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (empty()){
            front = rear = 0;
            arr[0] = val;
            return;
        }
        front = (front + 1) % size;
        arr[front] = val;
    }

    void push_back(int val){
        if (isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }
        rear = (rear + 1) % size;
        arr[rear] = val;
    }

    int pop_front(){
        if (empty()){
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        int val = arr[front];
        front = (front - 1) % size;
        return val;
    }

    int pop_back(){
        if (empty()){
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        int val = arr[rear];
        rear = (rear + 1) % size;
        return val;
    }

    int peek(){
        if (empty()){
            cout << "Queue Undeflow!" << endl;
            return -1;
        }
        return arr[front];
    }

    void display(){
        if (empty()){
            cout << "Queue Underflow!" << endl;
            return;
        }
        for (int i=front; i<rear; i++){
            cout << arr[front] << " ";
        }
        cout << endl;
    }

    bool empty(){
        return (front==-1);
    }
    bool isFull(){
        return (front==rear);
    }
};


int main(){
    Deque q(5);
    q.push_front(1);
    q.push_front(2);
    q.push_front(3);
    q.push_front(4);
    q.push_front(5);
    q.display();

}