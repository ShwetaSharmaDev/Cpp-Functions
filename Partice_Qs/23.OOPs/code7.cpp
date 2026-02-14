// two class derived in one class 
// inheritance of 2 class in 1 class

#include <iostream>
using namespace std;

class teacher {
    public:
    int salary;
    string subject;
};

class student{
    public:
    int rollno;
    int cgpa;
};

class ta: public teacher, public student{
    public:
    string name;
};

int main() {

    ta t1;
    t1.name = "mrgus";
    t1.cgpa = 9.1;
    t1.subject = "c++";


    cout<<t1.name<<endl;   
    cout<<t1.subject<<endl;   
    cout<<t1.cgpa<<endl;   

    
    return 0;
}