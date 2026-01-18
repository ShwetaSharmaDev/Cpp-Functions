#include <iostream>
using namespace std;

bool checkPrime(int num){
    if(num == 1){
        return false;
    }

    for(int i=2; i*i < num; i++){
        if(num%i == 0) return false ;
    }

    return true;
}

void allPrime(int n){
    for(int i=2; i<=n; i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }

    cout<<endl;
}
int main() {

    
    allPrime(13);
    return 0;
}