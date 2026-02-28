#include <iostream>
using namespace std;

class exapmle{
    public:

    exapmle(int a , int b){
        cout<<a+b<<endl;
        cout<<"interger"<<endl;
    }

    exapmle(double a , double b){
        cout<<a+b<<endl;
        cout<<"double \n";
    }

    int add(int a , int b){
        return a+b;
    }
    double add( double a , double b){
        return a+b;
    }
    char add(char a , char b){
        return a+b;
    }
};

int main() {

    exapmle g1(5.0,7.0);



    
    
    return 0;
}