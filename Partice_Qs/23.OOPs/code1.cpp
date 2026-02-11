#include <iostream>
using namespace std;


class Car {
private:
    string name;
    string color;

public:
    Car(string name , string color){
        this->name = name;
        this->color = color;
    }


    void start(){
        cout<<"car started";
    }

    void setname(string name , string color){
        this->name = name;
        this->color = color;
    }

    string getname(){
        return  name ;
    }
};

int main() {

    Car c1("maruti" , "white");

    cout<<c1.getname()<<endl;
        

    
    return 0;
}