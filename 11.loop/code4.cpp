// prime nummber 

#include <iostream>
using namespace std;
int main() {

    int num ;
    cin>>num;

    for(int i=2; i<num; i++){
        int curr = i;
        bool isPrime = true;

       for(int j=2;j*j<=i;j++){
        if(curr%j==0){
            isPrime=false;
        }
    }    
        if(isPrime){
            cout<<curr<<"";
        }
    }
        cout<<endl;
    return 0;
}