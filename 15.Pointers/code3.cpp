#include <iostream>
using namespace std;
int main() {

    int a = 32; 
    int *ptr = &a;

    char ch = 'A'; //ascii value 65 + 32 = 97
    char &cho = ch;

     
    cho = cho + a; //ch updated to 65 + 32 = 97 A
    cout<< ch << endl;
    *ptr += ch; //a updated to 32 + 97 = 129

    cout << a << "," << ch << endl;
    
    return 0;
}