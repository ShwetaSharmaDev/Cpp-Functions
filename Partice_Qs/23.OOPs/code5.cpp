// inheritance  means base class hai usse derived
//  base /super/parent jab class a se class b mai jaati hai  to usse inheritance khete hai ...

// use to code reusability...
#include <iostream>
using namespace std;

class animal{
    public:
    string color;
    
    void eat(){
        cout<<"eat \n";
    }
    
    void breath(){
        cout<<"breaths\n";
    }
};

class Fish : public animal{
    public:
    int fins;

    void swim(){

        // eat();
        cout<<"swims \n";
    }

};
int main() {

    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;

    f1.swim();
    f1.breath();
    f1.eat();
     
    
    
    return 0;
}