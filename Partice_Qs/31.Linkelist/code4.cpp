#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node* head;
    node* tail;
public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void printlist(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }

        cout<<"NULL\n";
    }
};

int main() {

    list l ;
    l.push_back(4);
    l.push_back(3);
    l.push_back(2);
    l.push_back(1);
    l.printlist();
    
    return 0;
}