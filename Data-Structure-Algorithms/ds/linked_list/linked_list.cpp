#include<iostream>
using namespace std;

class Node {
    private:
        int data;
        Node* next;
    public:
        Node(){
            data = 0;
            next = NULL;
        }

        Node(int d){
            data = d;
            next = NULL;
        }

        Node(int d, Node* n){
            data = d;
            next = n;
        }

        void setData(int x){
            data = x;
        }

        int getData(){
            return data;
        }

        void setNext(Node* n){
            next = n;
        }

        Node* getNext(){
            return next;
        }
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(){
            head = NULL;
        }

        void insertAtFront(int data){
            Node* n = new Node(data, head);
            head = n;
        }

        void insertAtBack(int data){
            Node* n = new Node(data);
            if(head == NULL){
                head = n;
            }
            else {
                Node* i;
                for(i = head; i->getNext() != NULL; i= i->getNext()){
                    ;
                }
                i->setNext(n);
            }
        }

        void print(){
            Node* i;
            for(i = head; i->getNext() != NULL; i=i->getNext()){
                cout << i->getData() << endl;
            }
            cout << i->getData() << endl;
        }

};

int main(){
    LinkedList list;
    list.insertAtBack(10);
    list.insertAtFront(5);
    list.insertAtBack(7);
    list.insertAtBack(15);
    list.print();
    return 0;
}