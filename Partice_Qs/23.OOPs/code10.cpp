#include <iostream>
using namespace std;

class student{
    public:
    string name ;
    int cgpa;

    student(){
        cout<<"create ...";
    }

    ~student(){
        cout<<"deleted ...";
    }

};

int main() {

    student c1;
    c1.name = "mrgus";
    c1.cgpa = 98;

    cout<<c1.name<<endl;
    cout<<c1.cgpa<<endl;

    
    return 0;
}