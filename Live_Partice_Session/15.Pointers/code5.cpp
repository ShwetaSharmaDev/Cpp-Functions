// wild Pointer Demo
#include <iostream>
using namespace std;
int main() {

    int *ptr = nullptr;

    int a = 10;
    ptr = &a;

    cout<<&ptr;
    cout<<*ptr;

    
    return 0;
}
