// Modify using pointer 
#include <iostream>
using namespace std;
int main() {

    int num = 50;
    
    int &ptr = num;

    ptr = 100;

    cout<<num;
    

    // cout<<ptr;
    return 0;
}