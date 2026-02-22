#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
        node(int val){
            data = val;
            next = NULL;
        }
};

class list {
    node *head;
    node  *tail;

    public:
        list(){
            head = NULL;
            tail =NULL;
        }

        void push_front(int val){
            node* newnode = new node(val);
            
            if(head == NULL){ 
                head = tail = newnode;
            }else{
                newnode->next = head;
                head = newnode;
            }
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

        void print_list(){
            node* temp = head;

            while(temp != NULL){
                cout<<temp->data<<"->";
                temp =temp->next;
            }
        }
};

int main() {

    /* push front
    push back
    pop front
    pop back
    */
   
   list l1;

   l1.push_front(3);
   l1.push_front(2);
   l1.push_front(1);

//    l1.print_list();
   l1.push_back(4);
   l1.print_list();

    return 0;
}