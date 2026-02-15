// Pointer to variable

#include <iostream>
using namespace std;
int main() {

    int x = 10;
    int *ptr = &x;

    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<&x;
    cout<<*ptr<<endl;
    
    return 0;
}