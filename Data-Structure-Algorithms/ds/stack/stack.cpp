#include <iostream>
using namespace std;

class Stack{
    private:
    int numbers [5];
    int top = -1;
    int arrSize = sizeof(numbers) / sizeof(numbers[0]);

    public:
    void push(int value){
        if (top== arrSize-1){
          cout<<"Stack is Full/Overflow"<<endl;
        }else{ 
          top++;
          numbers[top] = value;
          cout<<"PUSH: "<<value<<endl;
        }
       
    }
    int pop(){
        if(top==-1){
          cout<<"Stack is Null/Underflow"<<endl;
          return -1;
        }else{
          int value = numbers[top];
          cout << "POP: " << value << endl; 
          return value; 
        } 
    }
    
    int peek() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return -1; 
        }
        cout << "PEEK: " << numbers[top] << endl;
        return numbers[top];
    }

    bool isEmpty(){
        return top == -1;
    }
    
};


int main(){
    Stack stack;
    // stack.push(1);
    // stack.push(2);
    // stack.push(3);
    stack.peek();
    stack.isEmpty();
    // stack.push(4);
    // stack.push(5);
    // stack.push(6);
    // stack.push(7);
    // stack.push(8);
    // stack.push(9);
    //stack.pop();
    //stack.push(2);

    return 0;
}