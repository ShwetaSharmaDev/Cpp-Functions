// using Linked_list 

#include <iostream>
using namespace std;
#include<list>
// create a stack using linkedlist 
template<class T>
class node {
    public:
    T data;
    node *next;

    node(T val){
        data = val;
        next = NULL;
    } 
};


template <class T>
class stack{
    // list<T> li;
    node<T>* head;

    public:

    stack(){
        head = NULL;
    }

    void push(T val){
        // li.push_front(val);
        node<T> * newnode = new node<T>(val);
        if(head == NULL){
            head =  newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }


    void pop(){
        // li.pop_front();
        node<T>* temp  = head;
        head = head->next;
        temp->next = NULL;
    }

    T top(){
        // return li.front();

        return head->data;
    }

    bool isEmpty(){
        // return li.size() == 0;
        return head == NULL;
    }

    
};

int main() {

    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top() <<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}