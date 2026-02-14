// polymorphism  - multiply forms
// The ability of object to take on different forms or behave in different ways depending on the context in which they are used.

// 1. compile time polymorphism
// function overloading , operator overloading

// #include <iostream>
// using namespace std;

// class print
// {
// public:
//     void show(int x)
//     {
//         cout << "int : " << x << endl;
//     }

//     void show(string str)
//     {
//         cout << "string : " << str << endl;
//     }
// };
//  int main(){

//     print obj1;
//     obj1.show(25);
//     obj1.show("apnacollege");

//     return 0;
// }

// b. operator overloading

#include <iostream>
using namespace std;
class complex{
    int real;
    int img;

    public:
    complex(int r , int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout<<real<<"+"<<img<<"i\n";
    }

    complex operator + (complex &c2){
        int resReal = this->real + c2.real;
        int resimg = this->img + c2.img;
        complex c3(resReal , resimg);
        // cout<<"res = ";
        // c3.showNum();
        return c3;
    }
};

int main() {

    complex c1(1,2);
    complex c2(3,4);

    c1.showNum();
    c2.showNum();
    
    complex c3 = c1 + c2;
    c3.showNum();
    
    return 0;
}

    // 2. run time polymorphism
