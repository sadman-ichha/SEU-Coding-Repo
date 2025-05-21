#include <iostream>

using namespace std;

class Queue{
  private:
    int arr[2];
    int rear, front;
 
  public:
    Queue(){
     front = -1;
     rear = -1;
    }

    void enqueue(int value){
        rear++;
        if(front==-1) front =0;
        arr[rear] = value;
        cout<<"enqueue: "<< value<<endl;
    }

    int dequeue(){
        cout<<"dequeue: "<< arr[front]<<endl;
        if(front==0 || front>rear){
            cout << "Queue Underflow" << endl;
            return -1;
        }  
        return arr[front++];
    }

    void display(){
     for (int i = 0; i < 5; i++)
     {
       cout<<i<<endl;
     }
     
        
    }


};

int main(){
    Queue queue;
    queue.enqueue(12);
    queue.enqueue(11);
    queue.dequeue();
   // queue.dequeue();


    return 0;
}