// factorial of n number 

#include <iostream>
using namespace std;

int facNumber(int num){
    int fac = 1;
    for(int i=1; i<=num; i++){
        fac *= i;
    }
    return fac; 
}
int main() {

    cout<<facNumber(5);
    
    return 0;
}