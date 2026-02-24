#include <iostream>
using namespace std;
#include<list>

// pop - delete
// push - add on
// print - output display 

int main() {

    list<int> li;  
    li.push_back(5);      
    li.push_back(4);      
    li.push_back(3);      
    li.push_back(2);      
    li.push_back(1); 

    cout<<li.front();
    
    
    return 0;
}