#include <iostream>
using namespace std;

class A{
    public:
    void start(){
        cout<<"a start";
    }
};

class B : public A{
    public:
    void start(){
        cout<<"b start";
    }
};

// void counter(){
//     static int count = 0;
//     count++;
//     cout << "count : " << count << endl;
// }

// void hello(){
//     cout<<"heello \n";
// }

class example{
public:
    static  int x ;
};

int example::x = 0;

// class example1{
// public:
//     example1(){
//         cout << "example constructor" << endl;
//     }

//     ~example1(){
//         cout << "example destructor" << endl;
//     }
// };

int main() {

    example eg1;
    // example eg2;
    // example eg3;

    cout<<eg1.x++<<endl;
    cout<<eg1.x++<<endl;
    cout<<eg1.x++<<endl;

    // int a = 0;
    // if(a==0){
    //     static example1 e1;
    // }

    // cout<<"code ending... \n";

    return 0;
}