#include <iostream>
#define MAX 5
using namespace std;

class CircularQueue {
    int front, rear, size;
    int* arr;

public:
    CircularQueue() {
        front = 0;
        rear = -1;
        size = 0;
        arr = new int[MAX];
    }

    bool isEmpty() { 
        return size == 0; 
    }

    bool isFull() { 
	    return size == MAX; 
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        rear = (rear + 1) % MAX;
        arr[rear] = item;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int val = arr[front];

        front = (front + 1) % MAX; 
        size--;
        cout << "Removed: " << val << endl;
        return val;
    }

    int peekFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int peekRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    int getSize() { return size; }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = 0; i < size; i++) {

            int index = (front + i) % MAX;
            cout << arr[index] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display(); 

    return 0;
}