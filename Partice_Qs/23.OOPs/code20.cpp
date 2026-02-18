#include <iostream>
using namespace std;

class Complex{

    int real;
    int img;
    public:
    Complex(int r , int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout<<real<<" + "<<img<<" i \n";
    }

    // operator overloading 

    void operator+ (Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;

        Complex c3(resReal , resImg);
        c3.showNum();
    }

};


class parent {
    
    public:
    void show(){
        cout<<"parent class show. \n";
    }

    virtual void hello(){
        cout<<"parent hello \n";
    }
};

class child : public parent{
    public:
    void show(){
        cout<<"child class show. \n";
    }

    void hello(){
        cout<<"child hello ";
    }

};

// is_abstract class --

class shape{
     public:
     virtual void draw() = 0; //pure virtual function
};

class circle : public shape{
    public:
    void draw(){
        cout<<"draw square \n";
    }
};

void counter(){
    static int count = 0;
    count++;
    cout<<"count : "<<count<<endl;
}

class example{
    public:
    static int x ;
};

// static in object 
class example1{
    public:
    example1(){
        cout<<"example constructor"<<endl;
    }

    ~example1(){
        cout<<"example destructor"<<endl;
    }
};

// friend class & function 

class A {
    private:
    string secret = "secret data";
    friend class B;
};

class B {
    public:
    void showSecret(A &obj){
        cout<<obj.secret <<endl;
    }
};


// int example::x =9;

int main() {

    A a1;
    B b1;

   b1.showSecret(a1);




    // int a = 0;
    // if(a==0){
    //     static example1 e1;
    // }

    // cout<<"code ending... \n";

    // example eg1;
    // example eg2;
    // example eg3;

    // cout<<eg1.x++<<endl;
    // cout<<eg2.x++<<endl;
    // cout<<eg3.x++<<endl;

    // Complex c1(1,2);
    // Complex c2(3,4);

    
    // c1.showNum();
    // c2.showNum();

    // c1+c2;

    // child child1;
    // parent *ptr;
    // child1.show();

    // ptr = &child1; //run time binding
    // ptr->hello(); //virtual function

    // circle cir1;
    // cir1.draw();

    // counter();
    // counter();
    // counter();
    
    return 0;
}