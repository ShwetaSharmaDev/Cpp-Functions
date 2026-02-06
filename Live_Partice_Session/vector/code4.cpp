// Null Pointer safety 
#include <iostream>
using namespace std;
int main() {

    int *ptr = nullptr;

    cout<<*ptr;
    /* here its empty they didnot connect any address or say null address means they dont point to another variable address ....
    so dereferenced of *ptr with a null value give a segmentation fault error  */
    
    return 0;
}