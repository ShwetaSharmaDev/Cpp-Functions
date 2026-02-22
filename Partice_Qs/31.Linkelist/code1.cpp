// insert or adding element to nth position

#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }

    ~node(){
        // cout<<"~node"<<data <<endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};


class list{
    node *head;
    node *tail;
    
    public:
    list(){
        head = NULL;
        tail = NULL;
    }


    ~list(){
        // cout<<"~list \n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
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
        node *temp = head;

        while (temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout<<"NULL \n";
    }

    void insert(int val , int pos){
        node *newnode = new node(val);

        node *temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"position is INVALID \n";
            }
            temp = temp->next;
        }

        // temp is now at pos-1 i.e prev/left 
        newnode->next = temp->next;
        temp->next = newnode;
    }
};

int main() {

    list l1;
    
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(4);
    l1.push_back(5);
    l1.print_list();
    
    l1.insert(100,2);
    l1.print_list();
    
    return 0;
}