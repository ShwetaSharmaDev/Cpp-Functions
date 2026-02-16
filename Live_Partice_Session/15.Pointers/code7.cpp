// Heap Integer 
#include <iostream>
using namespace std;
int main() {

    int *ptr = new int[25];

    delete ptr;

    ptr = nullptr;
    return 0;
}