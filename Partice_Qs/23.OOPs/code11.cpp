/* run time polymorphism  */
/* parent and child both contain same a function
with different implementation
The parent class function is said to be overriden
*/

/* virtual function 
a virtual function is a member function that you expect to be redefined in derived class

properties of run time function:
1.dynamic in nature
2. virtual defined in base casee
3. called in run time
*/
#include <iostream>
using namespace std;

class parent{
    public:
    void show(){
        cout<<"parent show\n";
    }

    virtual void hello(){
        cout<<"parent hello \n";
    }
};

class child : public parent {
    public:
    void show(){
        cout<<"child class show \n";
    }

    void hello(){
        cout<<"hello child \n";
    }
};

int main() {
    
    child child1;
    child1.show();

    parent *ptr;
    ptr = &child1; //run time binding
    ptr->hello(); //virtual function


    
    
    return 0;
}

