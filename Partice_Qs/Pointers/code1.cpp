// pass by value 
// #include <iostream>
// using namespace std;

// void changeA(int a){
//     a=20;
//     cout<< a << "\n";
// }

// int main() {

//     int a = 10;
//     changeA(a);
//     cout<< a << "\n";
//     return 0;
// }


// Pass by reference 

// #include <iostream>
// using namespace std;

// void changeA(int *ptr){
//     *ptr = 20;
//     cout<<*ptr<<"\n";
// }

// int main() {
//     int a = 10;
//     changeA(&a);
//     cout<<a;
//     return 0;
// }


// Reference Variables 

// #include <iostream>
// using namespace std;
// int main() {

//     int a = 10;
//     int &b = a;

//     b = 25;

//     cout<<a;
    
//     return 0;
// }


// pass by refernce variables 

#include <iostream>
using namespace std;

void changeA(int &param){
    param = 20;
    cout<< param << "\n";
}
int main() {

    int a = 10;
    changeA(a);
    cout<<a;
    return 0;
}