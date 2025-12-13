#include <iostream>
using namespace std;

//prime 
bool isprime(int n){
    if(n == 1){
        return false;
    }for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
            return true;
 }

int main() {
    int n;
    cin>>n;
    if(isprime(n)){
        cout << "Yes " << n << " is a Prime Number";
    }
    else{
        cout << "No " << n << " is Not a Prime Number";
    }
    return 0;
}