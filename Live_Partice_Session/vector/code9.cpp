#include <iostream>
using namespace std;
int main() {

    int *ptr = new int (25);

    *ptr = 100;

    // memory leak when programming create a memory in a heap and forget to delete it ...
    // its lead to reduced to performance due to depletion of available memory ...
    
    return 0;
}