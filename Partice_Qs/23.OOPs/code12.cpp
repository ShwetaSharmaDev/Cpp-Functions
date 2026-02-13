/* abstraction
hiding all unnecessary detail and showing only the important parts 

abstract class and pure virtual function


properties of abstract class :
1.base class mai defined hota h
2.not make own object 
3.abstract class are typically used to defined an interface for derived classes
*/

#include <iostream>
using namespace std;

class shape{
    public:
    virtual void draw() = 0;
};

class circle: public shape{
    public:
    void draw(){
        cout<<"draw circle \n";
    }
};

class square : public shape{
    public:
    void draw(){
        cout<<"draw square \n";
    }
};

int main() {
    circle cir1;
    cir1.draw();


    square sqr1;
    sqr1.draw();


    
    return 0;
}