#include <iostream>
#include<list>
#include<iterator>

// iterator in c++ are object that allow you to traverse throung the elements of a container (like arrays , vectors, lists etc) in a sequential manner

using namespace std;

void printList(list<int> ll){

    list<int>::iterator itr;

    for (itr = ll.begin(); itr != ll.end(); itr++){
        cout << (*itr) << "->";
    }
    cout<<"Next"<<endl;
}

int main() {

    list<int> ll;
    ll.push_back(5);    
    ll.push_back(4);    
    ll.push_back(3);    
    ll.push_back(2);    
    ll.push_front(1);

    printList(ll);
    cout<<ll.size()<<endl;
    
    cout<< "head = "<< ll.front()<<"\n";
    cout<<"tail = "<<ll.back()<<"\n";

    ll.pop_back();
    printList(ll);
    ll.pop_front();
    printList(ll);
    
    return 0;
}