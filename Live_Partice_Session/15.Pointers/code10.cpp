#include <iostream>
using namespace std;
int main(){

    int *ptr1 = new int(42);

    int *ptr2 = ptr1;

    cout<<"After changes \n" <<endl<< ptr1 <<" : "<<*ptr1<<endl;
    cout<< ptr2 <<" : "<<*ptr2<<endl<<endl;

    delete ptr1;

    
    cout<<"Before Changes\n"<<endl<<ptr1<<" : "<<*ptr1<<endl;

    cout<<ptr2<<" : "<<*ptr2;

    ptr1 = nullptr;
    ptr2 = nullptr;

    // Crash, garbage, or seemingly "works"

    return 0;
}