// bonomial coefficient 

#include <iostream>
using namespace std;

int factorial(int num){
    int fac = 1;

    for(int i=1; i<=num; i++){
        fac *= i;
    }
    return fac;
}

int binCoff(int n , int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2 * val3);
    return result;
}

int main() {

    cout<<binCoff(4,2);
    
    return 0;
}