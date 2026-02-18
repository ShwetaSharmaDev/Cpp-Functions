#include <iostream>
using namespace std;

class animal{ //parent / base class
    public:
    void breath(){
        cout<<"breath \n";
    }

    void eat(){
        cout<<"eat \n";
    }
};

class dog : protected animal{
    public:
    void bark(){
        breath();
        eat();
        cout<<"bark";
    }
};

int main() {

    dog d1;
    d1.bark();
    
    return 0;
}