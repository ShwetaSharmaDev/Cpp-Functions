// LIFO - last in first out - stack
// FIFO  - first in first out - linkedlist
#include <iostream>
using namespace std;

class box{
    public:
    int data;
    box *address;

    box(int val){
        data = val;
        address = NULL;
    }
};

class list{
    box* head;
    box* tail;
    public:

    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        box *newbox = new box(val);
        if(head == NULL){
            head = tail = newbox;
        }else{
            newbox->address = head;
            head = newbox;
        }
    }

    void push_back(int val){
        box *newbox = new box(val);
        if(head == NULL){
            head = tail = newbox;
        }else{
            tail->address = newbox;
            tail = newbox;
        }
    }


    void printed(){
        box* temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->address;
        }
        
        cout<<"NULL \n"<<endl;
    }

    
    

};



int main() {

    list l1;

    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.printed();
    return 0;
}