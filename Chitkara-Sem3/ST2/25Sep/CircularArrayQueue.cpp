#include <iostream>
#define maxSize 10
using namespace std;

class QueueArray{
    private:
    int arr[maxSize];
    int front;
    int rear;
    int Count;

    public:
    QueueArray(){
        front = Count = 0;
        rear = -1;
    }

    bool isFull(){
        return (Count==maxSize);
    }
    bool empty(){
        return (Count==0);
    }

    void enqueue(int val){
        if (isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }
        rear = (rear + 1) % maxSize;
        arr[rear] = val;
        Count++;
    }

    int dequeue(){
        if (empty()){
            cout << "Queue Undeflow!" << endl;
            return -1;
        }
        int val = arr[front];
        front = (front + 1) % maxSize;
        Count--;
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
            cout << "Queue Undeflow!" << endl;
            return;
        }
        for (int i=front; i<rear; i++){
            cout << arr[front] << " ";
        }
        cout << endl;
    }
};


int main(){



    return 0;
}