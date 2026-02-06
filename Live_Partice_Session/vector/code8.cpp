#include <iostream>
using namespace std;
int main() {

    int *ptr = new int[25];

    delete ptr;

    *ptr = NULL;

    // because our system memory occupied to a certain amount of memory ... and create a free memory on our system ...  
    
    return 0;
}