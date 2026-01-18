// prime number 
#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int num = 15;
    bool isprime = true;

    for(int i=2; i<sqrt(num); i++){
        if(num%i == 0){
            isprime = false;
        }
    }
    
    if(isprime){
        cout<<"it's is a prime number";
    }else{
        cout<<"it's a no prime number";
    }
    return 0;
}