#include <iostream>

using namespace std;
class Node{
    public:;
        int data;
        Node* next;
        Node(int x, Node* n){
            data = x;
            next = n;
            }
};

 class Queue {
 private:

    Node* front;
    Node* back;

 public:
    Queue(){
        front = nullptr;
        back  = nullptr;
    }
    bool isEmpty(){
    return front == nullptr && back == nullptr;
    }
    void add_node(int a){

        if(isEmpty()){
                front = new Node(a,nullptr);
                back  = front;
        }
        else {
            back->next = new Node(a,nullptr);
            back = back->next;
        }

    }
    void dequeue(){
    if(!isEmpty()){
            if(front->next ==nullptr){
                front=nullptr;
                back=nullptr;
            }
            else{
            front = front->next;
            }


    }

}
 int top(){
 return front->data;
 }


 int size(){
     int a =0;
     for(Node* p= front;p!=nullptr;p=p->next){
        a++;
    }
    return a;
 }


    void print(){
        Node* trav;
        trav=front;
    while(trav!=nullptr){
        cout<< trav->data<<" ";
        trav=trav->next;
        cout<<endl;
    }







 };


};
int main(){
    Queue *q = new Queue();
     q->add_node(3);
     q->add_node(4);
     q->add_node(5);
     q->add_node(6);

     q->print();
     q->dequeue();
     q->print();
     cout<< q->size();
     cout<< q->top();

     return 0;


}
