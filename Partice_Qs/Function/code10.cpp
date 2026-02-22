#include <iostream>
using namespace std;

void changeA(int num) {
    num = 10;
    cout << "Value of num inside function: " << num << endl;
}

int main() {

    int a = 5;
    changeA(a);

    cout << "Value of a after function call: " << a << endl;
    
    return 0;
}