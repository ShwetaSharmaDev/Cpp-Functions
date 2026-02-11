// inheritance  means base class hai usse derived
//  base /super/parent jab class a se class b mai jaati hai  to usse inheritance khete hai ...

// use to code reusability...
#include <iostream>
using namespace std;

class animal{
public:
    void eat(){
        cout << "eat \n";
    }

    void breath(){
        cout << "breaths\n";
    }
};

class mammal : public animal{
public:
    string bloodtype;
    // string bloodType = "warm";
    mammal(){
        bloodtype = "warm";
    }
};

class dog : public mammal{
    public:
    void tailwag(){
        cout<<"dog wags its tail \n";
    }
};

int main(){

    dog d1;
    d1.breath();
    d1.eat();
    d1.tailwag();
    

    return 0;
}