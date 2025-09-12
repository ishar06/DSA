#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE 100

class StackArray{
private:
    int arr[MAX_SIZE];
    int top;
    
public:
    StackArray(){
        top = -1; 
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

    int access(int index){
        return items[index];
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

class StackVector{
    private:
    vector<int> items;

    public:
    void push(int item){
        items.push_back(item);
        cout << item << " pushed into the vector." << endl;
    }

    int pop(){
        if (items.empty()){
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int topItem = items.back();
        items.pop_back();
        cout << topItem << " poped from stack." << endl;
        return topItem;
    }

    int peek(){
        if (items.empty()){
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int top = items.back();
        return top;
    }

    void display(){
        for (int i = items.size()-1; i>=0; i--){
            cout << items[i] << endl;
        }
    }

};

int main(){

    // MyStack stack;
    // stack.push(5);
    // stack.push(6);
    // stack.push(7);
    // cout << stack.peek() << endl;
    // cout << stack.access(0) << endl;

    StackVector stack;
    int N;
    cin >> N;
    int arr[N];
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }
    for (int i=0; i<N; i++){
        stack.push(arr[i]);
    }
    cout << "----------" << endl;
    cout << "Top --> " << stack.peek() << endl;
    stack.display();

    

}