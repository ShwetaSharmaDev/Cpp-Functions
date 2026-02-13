#include <iostream>
using namespace std;
/* static keyword

1. static variables
- variables declared as static in a function are created and initalised once for the lifetime of the program
// in function

- static variables in a class are created and initialised once. they are shared by all the object of the class

// in class
2. static object

*/

class example{
    public:
    //     static int x;

    example(){
        cout<<"constructor\n";
    }

    ~example(){
        cout<<"destructor\n";
    }
};

// void counter(){
//     static int  count = 0;
//     count++;
//     cout<<"count : " << count << endl;
// }

// int example:: x = 0;

int main() {

    int a = 0;
    if(a == 0 ){
        static example eg1;
    }

    cout<<"code ending \n";

    // example eg1;
    // example eg2;
    // example eg3;

    // cout<<eg1.x++<<endl;
    // cout<<eg2.x++<<endl;
    // cout<<eg3.x++<<endl;
    

    // counter();
    // counter();
    // counter();
    
    return 0;
}