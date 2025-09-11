#include <iostream>
using namespace std;

#define MAX_SIZE 100

class StackArray{
private:
    int arr[MAX_SIZE];
    int top;
    
public:
    StackArray(){
        top = -1; // Indicates the stack is initially empty
    }
    bool isEmpty(){
        return (top == -1);
    }
    bool isFull(){
        return (top == MAX_SIZE - 1);
    }

    void push(int val){
        if (isFull()){
            cout << "Stack Overflow! Cannot Push" << val << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " pushed to stack. " << endl;
    }

    int pop(){
        if (isEmpty()){
            cout << "Stack Underflow! Cannot Pop." << endl;
            return -1;
        }
        int value = arr[top--];
        return value;
    }

    int peek(){
        if (isEmpty()){
            cout << "Stack is Empty." << endl;
            return -1;
        }
        return arr[top];
    }

};


#define MAX 10
class MyStack{
    private:
    int items[MAX];
    int count;

    public:
    MyStack(){
        count = 0;
    }

    void push(int item){
        if (count == MAX){
            cout << "Stack OverFlow!" << endl;
            return;
        }
        items[count++] = item;
    }

    int pop(){
        if (count == 0 ){
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return items[--count];
    }

    int peek(){
        if (count == 0 ){
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return items[count - 1];
    }

    bool isEmpty(){
        return count == 0;
    }

    void display(){
        if (count == 0 ){
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << "Stack elements from (Top to Bottom) : " << endl;
        for (int i = count -1; i>=0; i++){
            cout << items[i] << " ";
        }
        
    }
    bool isFull(){
        return count == MAX;
    }
};


int main(){
    MyStack stack;
    stack.push(5);
    cout << stack.peek() << endl;

}