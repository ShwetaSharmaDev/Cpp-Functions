#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node (int val){
        data = val;
        next = NULL;
    }
};

class list{
    node* head;
    node* tail;

    list(){
        head = NULL;
        tail = NULL;
    }

    void front_push(int val){
        node *newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void back_push(int val){
        node * newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = tail;
            tail = newnode;
        }
    }
};

int main() {

    
    
    return 0;
}