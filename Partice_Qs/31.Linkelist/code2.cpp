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

class list{
    public:
    node *head;
    node *tail;

    list(){
        head = NULL;
        tail= NULL;
    }

    node *newnode;

    // front_push element 
    void front_push(int val){
        node *newnode = new node(val);
        if(head ==NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
        
    }

    // push back element 
    void push_back(int val){
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // print element 
    void print_list(){
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL \n";
    }

    // insert element 
    void insert(int val, int pos)
    {
        node *newnode = new node(val);

        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position is INVALID \n";
            }
            temp = temp->next;
        }

        // temp is now at pos-1 i.e prev/left
        newnode->next = temp->next;
        temp->next = newnode;
    };


    //po_front
    void pop_front(){

        if(head ==NULL){
            cout<<"LL is empty\n";
            return;
        }

        node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    // pop_back
    void pop_back(){
        node* temp = head;

        while(temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next =NULL; //temp = tail's prev
        delete tail;
        tail = temp;
    }

    // iteration search element 
    int searchItr(int key){
        node * temp =  head;

        if(head == NULL){
            cout<<"its a empty list";
        }
        
        int idx = 1;
        while (temp != NULL){
            if(temp->data == key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int helper(node *temp , int key){
        if(temp ==NULL){
            return -1;
        }

        if(temp->data == key){
            return 0;
        }

        int idx = helper(temp->next , key);
        if(idx == -1){
            return -1;
        }

        return idx + 1;
    }

    // recursive search 
    int searchRecursive(int key){
        return helper(head , key);
    }

    void reverse(){

        node* curr = head;
        node* prev = NULL;
        // tail = head 
        while(curr != NULL){
            node* next = curr->next;
            curr->next = prev;

            // updation for next itr
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    //remove nth
    int getsize(){
        int sz = 0;
        node *temp = head;

        while (temp != NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
    }
    void removeNth(int n){
        int size = getsize();
        node * prev = head;
        for(int i=1; i<(size-n); i++){
            prev = prev->next;
        }
        node * todel = prev->next;
        cout<<"going to delete : "<< todel->data <<endl;
        prev->next = prev->next->next;
    }
};

void mergeSort(node* head){
    if(head ==NULL || head->next == NULL){
        return;
    }
    node* rightHead = splitAtMid(head);

    mergeSort(head); //left head
    mergeSort(rightHead); //right head

    merge(head ,rightHead);
}

int main() {

    list l ;
    l.front_push(8);
    l.front_push(7);
    l.front_push(6);
    l.front_push(5);
    l.print_list();

    l.reverse();
    l.print_list();
    
    l.removeNth(3);
    l.print_list();

    return 0;
}