// safe delete pattern 
#include <iostream>
using namespace std;
int main() {

    int *ptr = new int(42);

    cout<<"After value \n"<<ptr<<" : "<<*ptr<<"\n"<<endl;
    
    delete ptr;
    
    cout<<"Before value"<<endl<<ptr<<" : "<<*ptr<<"\n"<<endl;
    
    ptr = nullptr;

    cout<<"Ending value"<<endl<<ptr<<" : "<<*ptr<<endl;
    
    return 0;
}