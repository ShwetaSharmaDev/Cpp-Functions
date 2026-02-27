#include <iostream>
using namespace std;

int fac(int n){
    // Base_case 
    if (n == 0){
        return 1;
    }

    // call_back function
    return n * fac(n - 1);
}


int main() {

    cout<<fac(5)<<endl;
    5 * 4*3*2*1
    
    return 0;
}