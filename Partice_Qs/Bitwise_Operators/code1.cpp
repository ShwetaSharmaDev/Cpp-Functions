#include <iostream>
using namespace std;

void oddOrEven(int num){
    if(!(num & 1)){
        cout<<"Even number\n";
    }else{
        cout<<"Odd number\n";
    }
}

int main() {

    oddOrEven(5);
    oddOrEven(8);
    
    return 0;
}