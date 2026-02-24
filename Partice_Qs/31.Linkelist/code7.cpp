#include <iostream>
using namespace std;

class box{
    public:
    int data;
    box* next;
    box(int val){
        data = val;
        next = NULL;
    }
};

class list{
    public:
    box* head;
    box* tail;
    list(){
        head = NULL;
        tail = NULL;
    }

    void front_push(int val){
        box* newbox = new box(val);
        if(head == NULL){
            head = tail =newbox;
        }else{
            newbox->next = head;
            head = newbox;
        }
    }
};

int main() {

    list li;
    cout<<li.head<<endl;
    cout<<li.tail;


    
    return 0;
}