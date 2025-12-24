// factorial of number 

#include <iostream>
using namespace std;
int main() {

    int num;
    cin>>num;

    int fac = 1;

    for(int i=1; i<=num; i++){
        fac = fac * i;
    }
    cout<<fac;
    
    return 0;
}