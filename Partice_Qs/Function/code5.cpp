// prime number 

#include <iostream>
using namespace std;

bool checkPrime(int num){
    if(num == 1){
        return false;
    }

    for(int i =2; i*i <= num; i++ ){
        if(num %i == 0){
            return false;
        }
    }
    
    return true;
}

int main() {

    int result = checkPrime(4);
    
    if(result){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    
    return 0;
}