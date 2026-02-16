// swapping 2 variable by using pointer 

#include <iostream>
using namespace std;

void swapInterger(int *num1 ,  int *num2){
    int *ptr = nullptr;
    ptr = num1;

    num1 = num2;
    num2 = ptr;

    cout<<*num1<<endl;
    cout<<*num2<<endl;
}

int main() {

    int num1 = 10;
    int num2 = 20;
    swapInterger(&num1 , &num2);
    return 0;
}