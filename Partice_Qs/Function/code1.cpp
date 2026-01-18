// odd or even 
#include <iostream>
using namespace std;

int checkNumber(int num){
    return num%2 == 0;
}

int main() {

    int result = checkNumber(45);
    
    if(result){
        cout<<"Even number";
    }else{
        cout<<"Odd number";
    }
    
    return 0;
}