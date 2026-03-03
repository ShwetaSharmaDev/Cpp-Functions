// class or object 
// class - blueprint inside property, function , method 

#include <iostream>
using namespace std;


// constructor 


class student{
    string name;
    string last;
    public:

    student(){
        cout<<"it's a constructor";
    }

    student(string name, string last){
        this->name = name;
        this->last = last;
    }

    void setname(string nameval){
        name = nameval;
    }

    string getname(){
        return name;
    }

};



int main() {

    student s1;
    student s2(s1);

    

}

// encapsulation
// a wrapper up property function method in single unit ..