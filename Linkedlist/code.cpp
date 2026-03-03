#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node *head;
    node *tail;
    public:

    list (){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        node *newnode = new node(val);
        if(head ==NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        node * newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void printValue(){
        node *temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL \n";
    }
};

int main() {

    list li;
    li.push_back(5);
    li.push_back(4);
    li.push_back(3);
    li.push_back(2);
    li.push_back(1);

    li.printValue();

    
    
    return 0;
}