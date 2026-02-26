// queue is FIFO ...

#include <iostream>
using namespace std;
#include<list>
#include<iterator>

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* head;
    node * tail;
    public:
        queue(){
            head = tail = NULL;
        }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop(){
        if(empty()){
            cout<<"queue is empty \n";
        }
        node * temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout<<"queue is empty \n";
        }
        return head->data;
    }

    bool empty(){
        return head ==NULL;
    }
};

int main() {

    queue q1;
    q1.push_back(1);
    q1.push_back(2);
    q1.push_back(3);
    q1.push_back(4);
    q1.push_back(5);

    while(!q1.empty()){
        cout<<q1.front()<<endl;
        q1.pop();
    }
    
    
    return 0;
}