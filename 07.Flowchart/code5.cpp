// multiply of 3 

#include <iostream>
using namespace std;
int main() {

    int num;
    cin>>num;

    for(int i = 1; i <= num; i++) {
    i % 3 == 0 && (cout<< i << " ", true);
}
    
    return 0;
}